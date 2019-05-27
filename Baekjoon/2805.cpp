#include <iostream>

using namespace std;

int arr[1000000];

#define MAX_LEN 2000000000

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int r = 0, h = MAX_LEN, mid, ans;
    long long sum;

    while (r < h)
    {
        sum = 0;
        mid = (r + h) / 2;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] - mid > 0)
                sum += arr[i] - mid;
            if (sum > M)
                break;
        }

        if (sum < M)
            h = mid;
        else if (sum > M)
        {
            ans = mid;
            r = mid + 1;
        }
        else
        {
            ans = mid;
            break;
        }
    }
    cout << ans << '\n';

    return 0;
}