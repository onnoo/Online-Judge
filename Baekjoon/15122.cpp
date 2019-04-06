#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    long long num;
    cin >> num;
    while (true)
    {
        num++;
        s = to_string(num);
        if (s.find('0') == string::npos)
            break;
    }

    cout << num << '\n';

    return 0;
}