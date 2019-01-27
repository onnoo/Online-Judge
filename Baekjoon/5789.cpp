#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    string s;
    int N;
    cin >> N;
    while (N--)
    {
        cin >> s;
        if (s[s.size() / 2] == s[s.size() / 2 - 1])
            cout << "Do-it" << '\n';
        else
            cout << "Do-it-Not" << '\n';
    }

    return 0;
}