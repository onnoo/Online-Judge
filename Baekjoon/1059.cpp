#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int L, N;
    cin >> L;
    int arr[L];
    for (int i = 0; i < L; i++)
        cin >> arr[i];
    cin >> N;

    sort(arr, arr + L);
    // N보다 작은 Lucky Num : idx1
    // N보다 큰 Lucky Num : idx2
    int idx1 = 0, idx2 = 1001;
    for (int i = L - 2; i >= 0; i--)
    {
        if (arr[i] < N)
        {
            idx1 = arr[i];
            idx2 = arr[i + 1];
            break;
        }
    }
    if (idx1 == 0)
        idx2 = arr[0];
    int cnt = 0;
    for (int i = idx1 + 1; i <= N; i++)
        for (int j = idx2 - 1; j >= N && i != j; j--)
            cnt++;

    cout << cnt << '\n';

    return 0;
}