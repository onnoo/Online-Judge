#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    unsigned long long pos;
    if ((pos = s.find("x")) != string::npos)
    {
        s = s.substr(0, pos);
        if (pos == 0)
            cout << "1" << '\n';
        else if (s == "-")
            cout << "-1" << '\n';
        else
            cout << s << '\n';
    }
    else
        cout << "0" << '\n';

    return 0;
}