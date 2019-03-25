#include <iostream>

using namespace std;

bool arr[10000];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, X, Y, cnt = 0;
    cin >> N;

    while (N--)
    {
        cin >> X >> Y;
        for (int i = X; i < Y; i++)
            arr[i] = true;
    }

    for (int i = 1; i < 10000; i++)
        cnt += arr[i];

    cout << cnt << '\n';

    return 0;
}