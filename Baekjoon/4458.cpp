#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;

    cin >> N;
    cin.ignore();

    while (N--)
    {
        string s;
        getline(cin, s);
        if (s[0] >= 97)
            s[0] = s[0] - 32;
        cout << s << '\n';
    }

    return 0;
}