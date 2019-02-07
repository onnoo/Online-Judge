#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    ll arr[N + 2];
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i <= N; i++)
    {
        arr[i] = (arr[i - 2] + arr[i - 1]) % 15746;
    }
    cout << arr[N] << '\n';

    return 0;
}