#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int T;

    cin >> s >> T;
    while (T--)
    {
        int A, B;
        cin >> A >> B;
        char tmp = s[A];
        s[A] = s[B];
        s[B] = tmp;
    }
    cout << s << '\n';
    return 0;
}