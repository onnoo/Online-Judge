#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    bool ans = true;
    int N, A, B, t;
    cin >> N >> A >> B;

    int arr[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];

    t = arr[A - 1][B - 1];
    for (int i = 0; i < N && ans; i++)
        if (t < arr[i][B - 1])
            ans = false;

    for (int i = 0; i < N && ans; i++)
        if (t < arr[A - 1][i])
            ans = false;

    cout << (ans ? "HAPPY" : "ANGRY") << '\n';

    return 0;
}