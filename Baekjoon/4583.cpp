#include <iostream>
#include <string>

using namespace std;

// b - d, p - q, i, o, v, w, x

string mirror = "0d0b0000i00000oqp0000vwx00";

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    bool chk;
    string s, ans;
    cin >> s;

    while (s != "#")
    {
        chk = true;
        ans = "";
        for (char c : s)
        {
            if (mirror[c - 'a'] == '0')
            {
                chk = false;
                break;
            }
            ans = mirror[c - 'a'] + ans;
        }
        cout << (chk ? ans : "INVALID") << '\n';
        cin >> s;
    }
    return 0;
}