#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int check[53];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, i;
    string s;
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cin >> M;
        check[M]++;
    }

    cin.ignore();
    getline(cin, s);

    for (char c : s)
    {
        if (isspace(c))
            check[0]--;
        else if (isupper(c))
            check[1 + c - 'A']--;
        else
            check[27 + c - 'a']--;
    }

    bool ans = true;
    for (i = 0; i < 53; i++)
    {
        if (check[i])
        {
            ans = false;
            break;
        }
    }
    cout << (ans ? 'y' : 'n') << '\n';

    return 0;
}