#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int sz;
    cin >> sz;
    char s[sz + 1];
    cin >> s;

    bool exist = false;
    long long sum = 0;
    int num = 0;
    int cnt = 0;
    for (int i = 0; i < sz; i++)
    {
        if (isdigit(s[i]))
        {
            num *= 10;
            num += (s[i] - 48);
            cnt++;
        }
        else
        {
            if (num <= 999999)
            {
                sum += num;
                exist = true;
            }
            num = 0;
            cnt = 0;
        }
    }
    if (num <= 999999)
    {
        sum += num;
        exist = true;
    }

    cout << (exist ? sum : 0) << '\n';

    return 0;
}