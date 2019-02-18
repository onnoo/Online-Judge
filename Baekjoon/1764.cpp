#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    set<string> s1, s2;
    string str;
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        cin >> str;
        s1.insert(str);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> str;
        if (s1.find(str) != s1.end())
            s2.insert(str);
    }

    printf("%d\n", s2.size());
    for (string each : s2)
        cout << each << '\n';

    return 0;
}