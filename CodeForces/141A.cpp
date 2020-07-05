#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    string guest, host, letters;
    cin >> guest >> host>> letters;

    int arr[26] = {0};
    for (char c : letters) {
        arr[c - 'A']++;
    }

    for (char c : guest) {
        arr[c - 'A']--;
    }
    for (char c : host) {
        arr[c - 'A']--;
    }

    for (int i : arr)
    {
        if (i != 0)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}