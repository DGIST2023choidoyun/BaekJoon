/*온라인 저지에 가입한 사람들의 나이와 이름이 가입한 순서대로 주어진다. 이때, 회원들을 나이가 증가하는 순으로, 나이가 같으면 먼저 가입한 사람이 앞에 오는 순서로 정렬하는 프로그램을 작성하시오.*/

#include <iostream>
#include <algorithm>
using namespace std;

typedef
struct member{
    int age;
    char* name;
    int seq;
}Member;

bool mycompare(const Member& m1, const Member& m2)
{
    if (m1.age == m2.age)
        return m1.seq < m2.seq;
    return m1.age < m2.age;
}  

int main()
{
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, i = 0;
    Member* mem;
    cin >> n;
    mem = new Member[n];

    while (i++ < n)
    {
        mem[i - 1].name = new char[101];
        cin >> mem[i - 1].age >> mem[i - 1].name;
        mem[i - 1].seq = i;
    }i--;

    sort(mem, mem + n, mycompare);

    for (n = 0; n < i; n++)
        cout << mem[n].age << ' ' << mem[n].name << '\n';

    return 0;
}