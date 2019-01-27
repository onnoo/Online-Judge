#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string conv(string N, int base)
{
    string ret = "";
    while (N != "0")
    {
        string sub = "";
        int num = 0;
        for (int i = 0; i < N.size(); i++)
        {
            int tmp = N[i] - 48 + num * 10;
            sub += to_string(tmp / base);
            num = tmp % base;
        }
        int zeros = 0;
        while (sub[zeros] == '0' && zeros < sub.size() - 1)
            zeros++;
        sub = sub.substr(zeros, sub.size() - zeros);
        N = sub;
        ret = (char)(num + 48) + ret;
    }
    return ret;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    string N;
    cin >> N;

    bool exist = false;

    for (int base = 2; base <= 10; base++)
    {
        bool pal = true;
        string s = conv(N, base);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != s[s.size() - i - 1])
            {
                pal = false;
                break;
            }
        }
        if (pal)
        {
            cout << base << ' ' << s << '\n';
            exist = true;
        }
    }
    if (!exist)
        cout << "NIE\n";

    return 0;
}