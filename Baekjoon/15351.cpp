#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    string s;
    int N, sum;
    cin >> N;
    cin.ignore();
    while (N--)
    {
        sum = 0;
        getline(cin, s);
        for (int i = 0; s[i]; i++)
        {
            if (s[i] == ' ')
                continue;
            sum += s[i] - 'A' + 1;
        }
        if (sum == 100)
            cout << "PERFECT LIFE\n";
        else
            cout << sum << '\n';
    }
    return 0;
}