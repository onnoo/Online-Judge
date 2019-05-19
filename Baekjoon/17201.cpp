#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    string s;
    cin >> N >> s;

    for (int i = 0; i < 2 * N - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";

    return 0;
}