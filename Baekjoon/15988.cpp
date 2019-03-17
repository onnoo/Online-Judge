#include <iostream>

using namespace std;

long long arr[1000001];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, N;
    cin >> T;
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for (int j = 4; j <= 1000000; j++)
    {
        arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3];
        arr[j] %= 1000000009;
    }
    while (T--)
    {
        cin >> N;
        cout << arr[N] << '\n';
    }

    return 0;
}