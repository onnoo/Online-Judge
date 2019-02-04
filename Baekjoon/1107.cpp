#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string N;
int M;
vector<char> num;

void make_vector(void)
{
    bool arr[10] = {0};
    while (M--)
    {
        int tmp;
        cin >> tmp;
        arr[tmp] = true;
    }

    for (int i = 0; i < 10; i++)
        if (!arr[i])
            num.push_back((char)(i + 48));
}

string large_N2(void)
{
    string ret = "";
    for (int i = 0; i <= N.size(); i++)
        ret += num.front();
    if (ret.front() == '0')
    {
        if (num.size() == 1)
            ret = "999999";
        else
            ret[0] = num[1];
    }

    return ret;
}

string large_N(bool equal)
{
    string ret = "";
    for (int i = 0; N[i]; i++)
    {
        bool chk = false;
        for (char c : num)
        {
            if (i > 0 && ret[i - 1] > N[i - 1])
            {
                for (int j = i; N[j]; j++)
                    ret += num[0];
                return ret;
            }

            if ((equal && c >= N[i]) || (!equal && c > N[i]))
            {
                ret += c;
                chk = true;
                break;
            }
        }
        if (equal && !chk)
            return large_N(false);
        else if (!chk)
            return large_N2();
    }
    return ret;
}

string small_N2(void)
{
    string ret = "";
    for (int i = 0; i < N.size() - 1; i++)
        ret += num.front();
    return ret == "" ? "999999" : ret;
}

string small_N(bool equal)
{
    string ret = "";
    for (int i = 0; N[i]; i++)
    {
        bool chk = false;
        for (char c : num)
        {
            if (i > 0 && ret[i - 1] < N[i - 1])
            {
                for (int j = i; N[j]; j++)
                    ret += num.front();
                return ret;
            }

            if ((equal && c <= N[i]) || (!equal && c < N[i]))
            {
                ret += c;
                chk = true;
                break;
            }
        }
        if (equal && !chk)
            return small_N(false);
        else if (!chk)
            return small_N2();
    }
    return ret;
}

string clear_zero(string s)
{
    int zeros = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '0')
            zeros++;
        else
            break;
    }
    return (zeros == s.size() ? s.substr(zeros - 1, 1) : s.substr(zeros, s.size() - zeros));
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    make_vector();

    int int_N = stoi(N.c_str());
    if (!num.empty())
    {
        string large = clear_zero(large_N(true));
        reverse(num.begin(), num.end());
        string small = clear_zero(small_N(true));
        cout << min(abs(100 - int_N), (int)min(large.size() + stoi(large.c_str()) - int_N, small.size() + int_N - stoi(small.c_str()))) << '\n';
    }
    else
        cout << abs(100 - int_N) << '\n';

    return 0;
}