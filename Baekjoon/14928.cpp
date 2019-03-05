#include <iostream>
#include <string>

using namespace std;

string remove_zeros(string s)
{
    int i = 0;
    while (s[i] == '0' && i < s.size() - 1)
        i++;
    return s.substr(i, s.size() - i);
}

string subtract(string a, string b)
{
    string ret = "";
    int carry = 0;
    for (int i = 1; i <= a.size(); i++)
    {
        int sub = a[a.size() - i] - 48 - (i <= b.size() ? b[b.size() - i] - 48 : 0) - carry;
        if (sub < 0)
        {
            carry = 1;
            sub += 10;
        }
        else
            carry = 0;
        ret = (char)(sub + 48) + ret;
    }
    return remove_zeros(ret);
}

bool comp(string tmp, string d)
{
    if (tmp.size() == d.size())
        return tmp >= d;
    return tmp.size() >= d.size();
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string N;
    cin >> N;

    string tmp = "";
    string d = "20000303";
    for (int i = 0; N[i]; i++)
    {
        char t = N[i];
        tmp += t;
        tmp = remove_zeros(tmp);
        while (comp(tmp, d))
            tmp = subtract(tmp, d);
    }
    cout << tmp << '\n';

    return 0;
}