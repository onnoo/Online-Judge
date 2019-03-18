#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<char> s;
    int N, cnt = 0;
    cin >> N;

    while (N--)
    {
        string str;
        cin >> str;
        for (int i = 0; str[i]; i++)
        {
            if (s.empty())
            {
                s.push_back(str[i]);
            }
            else
            {
                if (str[i] == s.back())
                {
                    s.pop_back();
                }
                else
                {
                    s.push_back(str[i]);
                }
            }
        }
        cnt += s.empty();
        s.clear();
    }

    cout << cnt << '\n';

    return 0;
}