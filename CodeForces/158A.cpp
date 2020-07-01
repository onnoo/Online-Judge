#include <iostream>

using namespace std;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int n, k, t, ans = 0;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    t = arr[k - 1];
    for (int i = 0; i < n; i++)
    {
        ans += (arr[i] > 0 && arr[i] >= t);
    }

    cout << ans << '\n';

    return 0;
}