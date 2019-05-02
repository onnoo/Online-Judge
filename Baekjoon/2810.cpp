#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, ans = 0;
    bool clk = true;
    string s;
    cin >> N >> s;

    for (int i = 0; i < N; i++)
    {
        if (s[i] == 'S')
        {
            ans++;
        }
        else // s[i] == 'L'
        {
            ans++;
            i++;
            if (clk)
            {
                clk = false;
                ans++;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}