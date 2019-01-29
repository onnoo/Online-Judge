#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    cin.ignore();
    for (int t = 1; t <= T; t++)
    {
        string s;
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        int arr[26] = {0};
        for (int i = 0; s[i]; i++)
        {
            if (!isupper(s[i]))
                continue;
            arr[s[i] - 65]++;
        }
        cout << "Case " << t << ": ";
        switch (*min_element(arr, arr + 26))
        {
        case 0:
            cout << "Not a pangram\n";
            break;
        case 1:
            cout << "Pangram!\n";
            break;
        case 2:
            cout << "Double pangram!!\n";
            break;
        default:
            cout << "Triple pangram!!!\n";
        }
    }

    return 0;
}