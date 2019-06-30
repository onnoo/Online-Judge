#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i - 1] - s[i] != s[i] - s[i + 1])
        {
            cout << "흥칫뿡!! <(￣ ﹌ ￣)>\n";
            return 0;
        }
    }
    cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!\n";

    return 0;
}