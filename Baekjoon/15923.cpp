#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, sum = 0;
    int arr[2][41];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[0][i] >> arr[1][i];
    }

    for (int i = 0; i < N; i++)
    {
        sum += abs(arr[0][i] - arr[0][(i + 1) % N]) + abs(arr[1][i] - arr[1][(i + 1) % N]);
    }

    cout << sum << '\n';

    return 0;
}