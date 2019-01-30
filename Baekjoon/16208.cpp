#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    long long arr[N], sum = 0, cost = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + N);

    for (int i = 0; i < N; i++)
    {
        cost += arr[i] * (sum -= arr[i]);
    }

    cout << cost << '\n';

    return 0;
}