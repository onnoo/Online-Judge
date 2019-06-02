#include <iostream>

using namespace std;

int arr[10000];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, tot;
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i];
    cin >> tot;

    int ans, sum;
    int low = 0, high = 100000, mid;

    while (low <= high)
    {
        sum = 0;
        mid = (low + high) / 2;

        for (int i = 0; i < N; i++)
        {
            if (arr[i] <= mid)
                sum += arr[i];
            else
                sum += mid;
        }

        if (sum > tot)
        {
            high = mid - 1;
        }
        else if (sum < tot)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            ans = mid;
            break;
        }
    }

    int m = -1;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > ans)
            arr[i] = ans;
        if(arr[i] <= ans && arr[i] > m)
            m = arr[i];
    }

    cout << m << '\n';
    
    return 0;
}