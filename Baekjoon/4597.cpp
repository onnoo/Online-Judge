#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    while (s != "#")
    {
        bool odd = s.back() == 'o';
        int cnt = 0;

        for (int i = 0; i < s.size() - 1; i++)
        {
            cout << s[i];
            if (s[i] == '1')
                cnt++;
        }

        if (cnt % 2 == odd)
            cout << '0' << '\n';
        else
            cout << '1' << '\n';
        cin >> s;
    }

    return 0;
}