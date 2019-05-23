#include <iostream>
#include <vector>
#include <queue>
#include <stdlib.h>
#include <cctype>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    bool *arr;
    string s;
    cin >> N;
    cin.ignore();

    while (N--)
    {
        getline(cin, s);
        arr = (bool *)calloc(26, sizeof(bool));

        for (char c : s)
        {
            if (isalpha(c))
            {
                if (c >= 'a')
                    arr[c - 'a'] = true;
                else
                    arr[c - 'A'] = true;
            }
        }

        bool ans = true;
        for (int i = 0; i < 26; i++)
        {
            if (!arr[i])
            {
                ans = false;
                break;
            }
        }

        if (ans)
            cout << "pangram\n";
        else
        {
            cout << "missing ";
            for (int i = 0; i < 26; i++)
            {
                if (!arr[i])
                    cout << (char)(i + 'a');
            }
            cout << '\n';
        }

        free(arr);
    }

    return 0;
}