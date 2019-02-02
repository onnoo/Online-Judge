#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;

    map<string, int> m;
    vector<string> v(N);

    for (int i = 1; i <= N; i++)
    {
        string s;
        cin >> s;
        m[s] = i;
        v[i - 1] = s;
    }

    while (M--)
    {
        string s;
        cin >> s;
        if (isdigit(s[0]))
            cout << v[stoi(s.c_str()) - 1] << '\n';
        else
            cout << m[s] << '\n';
    }

    return 0;
}