#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    queue<char> q;
    string s;
    int T;
    cin >> T;
    while (T--)
    {
        string me = "", you = "";
        cin >> s;
        if (s.size() % 2) // 홀수
            s += s;
        for (auto it = s.begin(); it != s.end(); ++it)
            q.push(*it);
        while (!q.empty())
        {
            me += q.front();
            q.pop();
            you += q.front();
            q.pop();
        }
        cout << me << '\n'
             << you << '\n';
    }

    return 0;
}