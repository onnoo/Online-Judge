#include <iostream>

using namespace std;

bool arr[2000001];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, C, M, cnt = 0;
    cin >> N >> C;

    while (N--)
    {
        cin >> M;
        for (int i = M; i <= C; i += M)
            arr[i] = true;
    }

    for (int i = 1; i <= C; i++)
        cnt += arr[i];

    cout << cnt << '\n';

    return 0;
}