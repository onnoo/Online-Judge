#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    int t, cnt = 0;
    cin >> t;
    while (t--)
    {
        string tmp;
        cin >> tmp;
        for (int i = 0; i < 10; i++)
        {
            auto it = tmp.begin();
            rotate(tmp.begin(), ++it, tmp.end());
            if (tmp.find(s) != string::npos)
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt << '\n';
}