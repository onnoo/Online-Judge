#include <iostream>
#include <algorithm>

using namespace std;

long long gcd(int a, int b)
{
    if (b == 0)
        return a;
    if (a > b)
        return gcd(b, a % b);
    else
        return gcd(a, b % a);
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long T, N, ans;
    cin >> T;

    while (T--)
    {
        ans = 0;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                ans += gcd(arr[i], arr[j]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}