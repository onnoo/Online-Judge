#include <iostream>

using namespace std;

int arr[32];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int A, B;
        cin >> A >> B;
        for (int j = A; j < B; j++)
            arr[j]++;
    }
    cin >> K;
    bool ans = true;
    for (int i = 1; i <= 31; i++)
        if (arr[i] > K)
            ans = false;

    cout << ans << '\n';

    return 0;
}