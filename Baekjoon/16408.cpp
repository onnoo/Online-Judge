#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    char arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> s;
        arr[i] = s[0];
    }

    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        int tmp = 1;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
                tmp++;
        }
        if (ans < tmp)
            ans = tmp;
    }

    cout << ans << '\n';

    return 0;
}