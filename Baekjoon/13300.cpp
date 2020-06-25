#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int answer = 0;
    int N, K, S, Y;
    int arr[2][7] = {0};
    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> S >> Y;
        arr[S][Y]++;
    }

    for (int i = 1; i <= 6; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            answer += ceil(arr[j][i] / (float)K);
        }
    }

    cout << answer << '\n';

    return 0;
}