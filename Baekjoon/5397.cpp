#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    string s;
    list<char> ls;
    int T;
    cin >> T;
    while (T--)
    {
        cin >> s;
        auto iter = ls.begin();
        for (auto c = s.begin(); c != s.end(); ++c)
        {
            // cout << *c << '\n';
            if (*c == '<')
            {
                if (iter != ls.begin())
                    iter--;
            }
            else if (*c == '>')
            {
                if (iter != ls.end())
                    iter++;
            }
            else if (*c == '-')
            {
                if (iter != ls.begin())
                {
                    iter--;
                    iter = ls.erase(iter);
                }
            }
            else
            {
                iter = ls.insert(iter, *c);
                iter++;
            }
        }

        for (char c : ls)
            cout << c;
        cout << '\n';

        ls.clear();
    }

    return 0;
}