#include <iostream>
#include <algorithm>

using namespace std;

int N, L, R, X, cnt, *arr;

void comb(int i, int val, int low, int high)
{
    if (i == N)
        cnt += (high - low >= X && L <= val && val <= R);
    else
    {
        comb(i + 1, val + arr[i], min(arr[i], low), max(arr[i], high));
        comb(i + 1, val, low, high);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> L >> R >> X;
    arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    comb(0, 0, 10000000, -1);
    cout << cnt << '\n';

    return 0;
}