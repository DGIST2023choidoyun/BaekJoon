#include <iostream>
using namespace std;

class A
{
    public:
        int a;
        A() { cout << "A\n"; }
};
class D
{
    public:
        int d;
        D() { cout << "D\n"; }
};
class B : virtual public A
{
    public:
        int b;
        B() { cout << "B\n"; };
};
class C : virtual public A
{
    public:
        int c;
        C() { cout << "C\n"; }
};
class F : virtual public D
{
    public:
        int f;
        F() { cout << "F\n"; }
};
class E : virtual public D
{
    public:
        int e;
        E() { cout << "E\n"; }
};
class G : virtual public C, virtual public E, public B
{
    public:
        int g;
        G() { cout << "G\n"; }
};
class H : virtual public C, virtual public E, public F
{
    public:
        int h;
        H() { cout << "H\n"; }
};
class I : public G, public H
{
    public:
        int i;
        I() { cout << "I\n"; }
};

class First
{
    public:
        First()
            {
                cout << "First()\n";
            }
            First(int x)
            {
                cout << "First(x)\n";
            }
    };
    class Second: public virtual First      // virtual에 주목
    {
        public:
        Second()
        {
            cout << "Second\n";
        }
            Second(int x)
            :
                First(x)
            {cout << "Second(x)\n";}
    };
    class Third: public Second // 상위 클래스의 생성자를 지배
    {
        public:
        Third()
        {
            cout << "Third\n";
        }
            Third(int x)
            :
                First(x)
                //Second(x)
            {cout << "Third(x)\n";}
    };

class Base
{
    public:
    int d;
    Base()
    {
        d = 0;
        cout << "Base\n";
    }
    Base(bool b)
    {
        d = 1;
        cout << "Base1\n";
    }
    Base(int i)
    {
        d = 2;
        cout << "Base2\n";
    }
};

class Derv1 : public Base
{
    public:
    Derv1() : Base(true)
    {
        cout << "Derv1\n";
    }
};

class Derv2 : public virtual Base
{
    public:
    Derv2() : Base(0)
    {
        cout << "Derv2\n";
    }
};

class Fine : public Derv1, public Derv2
{
    public:
    Fine()
    {
        cout << "Fine\n";
    }
};

int main()
{
    // I my;
    // my.a = 0;
    // cout << my.a << '\n';
    // my.b = 1;
    // cout << my.b << "\n\n";

    // Third t(3);

    Fine f;
    //cout << f.d;

    return 0;
}