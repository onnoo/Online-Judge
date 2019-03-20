#include <iostream>
#include <string>

using namespace std;

int arr[26];

int main(void)
{
    string s;
    cin >> s;
    for (char c : s)
        arr[c - 65]++;

    int idx = -1;
    bool chk = s.size() % 2, ans = true;
    for (int i = 0; i < 26 && ans; i++)
    {
        if (arr[i] % 2)
        {
            idx = i;
            ans = chk;
            chk = false;
        }
    }

    if (!ans)
    {
        cout << "I\'m Sorry Hansoo\n";
        return 0;
    }

    s = "";
    if (idx != -1)
    {
        s += (char)(idx + 65);
        arr[idx]--;
    }

    for (int i = 25; i >= 0; i--)
    {
        for (int j = arr[i]; j > 0; j -= 2)
        {
            s = s + (char)(i + 65);
            s = (char)(i + 65) + s;
        }
    }

    cout << s << '\n';

    return 0;
}