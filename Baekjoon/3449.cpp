#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int cnt = 0;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < s1[i]; i++)
            if (s1[i] != s2[i])
                cnt++;
        cout << "Hamming distance is " << cnt << ".\n";
    }

    return 0;
}