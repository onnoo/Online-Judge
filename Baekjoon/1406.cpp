#include <iostream>
#include <list>
#include <string>
#include <iterator>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int N;
    list<char> ls;
    cin >> s >> N;
    auto it = ls.begin();
    for (int i = 0; s[i]; i++)
        ls.insert(it, s[i]);

    char cmd, c;
    while (N--)
    {
        cin >> cmd;
        switch (cmd)
        {
        case 'L':
            if (it != ls.begin())
            {
                advance(it, -1);
            }
            break;
        case 'D':
            if (it != ls.end())
            {
                advance(it, 1);
            }
            break;
        case 'B':
            if (it != ls.begin())
            {
                advance(it, -1);
                it = ls.erase(it);
            }
            break;
        default: // 'P'
            cin >> c;
            ls.insert(it, c);
            break;
        }
    }

    for (it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it;
    }
    cout << '\n';

    return 0;
}