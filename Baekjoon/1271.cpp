#include <iostream>
#include <string>
using namespace std;

string remove_zeros(string s)
{
    string ret = "";
    int cnt = 0;
    while (s[cnt] == '0' && cnt != s.size() - 1)
        cnt++;
    return s.substr(cnt, s.size() - cnt);
}

string subtract(string a, string b)
{
    string ret = "";
    int carry = 0;
    for (int i = 1; i <= a.size(); i++)
    {
        int sum = (a[a.size() - i] - 48) - (i <= b.size() ? b[b.size() - i] - 48 : 0) - carry;
        if (sum < 0)
        {
            carry = 1;
            sum += 10;
        }
        else
        {
            carry = 0;
        }
        ret = (char)(sum + 48) + ret;
    }
    return remove_zeros(ret);
}

bool comp(string a, string b)
{
    if (a.size() == b.size())
        return a > b;
    else
        return a.size() > b.size();
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string N, M;
    cin >> N >> M;

    string t = "", quotient = "";
    for (int i = 0; N[i]; i++)
    {
        t += N[i];
        t = remove_zeros(t);
        if (comp(M, t))
        {
            quotient += '0';
            continue;
        }
        else
        {
            int tmp = 0;
            while (!comp(M, t))
            {
                t = subtract(t, M);
                tmp++;
            }
            quotient += (char)(tmp + 48);
        }
    }
    quotient = remove_zeros(quotient);
    t = remove_zeros(t);

    cout << quotient << '\n'
         << t << '\n';

    return 0;
}