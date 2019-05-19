#include <iostream>
#include <stdlib.h>
using namespace std;

int arr[1001];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, Q, i, j, sum;
    cin >> N >> Q;

    for (i = 0; i < N; i++)
        cin >> arr[i + 1];

    while (Q--)
    {
        sum = 0;
        cin >> i >> j;
        for (int k = i; k < j; k++)
        {
            sum += abs(arr[k + 1] - arr[k]);
        }
        cout << sum << '\n';
    }

    return 0;
}