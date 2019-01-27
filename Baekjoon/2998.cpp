#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    string s, ret = "";
    cin >> s;
    while (s.size() % 3)
    {
        s = '0' + s;
    }
    while (!s.empty())
    {
        int num = 0;
        string tmp = s.substr(s.size() - 3, 3);
        s = s.substr(0, s.size() - 3);
        num = (tmp[0] - 48) * 4 + (tmp[1] - 48) * 2 + (tmp[2] - 48);
        ret = (char)(num + 48) + ret;
    }
    cout << ret << '\n';

    return 0;
}