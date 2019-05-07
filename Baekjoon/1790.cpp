#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int count_num(int n)
{
    long long i = 1;
    int j = 1;
    for (; n >= i; i *= 10)
        j++;
    return j - 1;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K, cnt_sum = 0;
    cin >> N >> K;

    for (int i = 1; i <= N; i++)
    {
        cnt_sum += count_num(i);
        if (cnt_sum >= K)
        {
            string s = to_string(i);
            cout << s[s.size() - 1 - (cnt_sum - K)] << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';

    return 0;
}