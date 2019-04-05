#include <iostream>
#include <limits.h>

using namespace std;

long long A, B, V;

int bin_search()
{
    long long left, right, mid, ans;
    left = 0;
    right = INT_MAX;
    while (left <= right)
    {
        mid = (right + left) / 2;
        if (A * mid - B * (mid - 1) >= V)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ans;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B >> V;
    cout << bin_search() << '\n';

    return 0;
}