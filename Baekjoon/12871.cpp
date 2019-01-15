#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
    {
        if (a > b)
            return gcd(b, a % b);
        else
            return gcd(a, b % a);
    }
}

int main(void)
{
    string s, t;
    cin >> s >> t;

    int ss = s.size(), ts = t.size();
    int lcm = ss * ts / gcd(ss, ts);

    for (int i = 1; i < lcm / ss; i++)
        s += s.substr(0, ss);

    for (int i = 1; i < lcm / ts; i++)
        t += t.substr(0, ts);

    printf("%d\n", s == t);

    return 0;
}