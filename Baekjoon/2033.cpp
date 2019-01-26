#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    int sz = s.size(), carry = 0;
    for (int i = 1; i <= sz - 1; i++)
    {
        carry = s[sz - i] + carry >= '5';
        s[sz - i] = '0';
    }
    s[0] += carry;
    if(s[0] > '9')
    {
        s[0] = '0';
        s = '1' + s;
    }

    cout << s << '\n';

    return 0;
}