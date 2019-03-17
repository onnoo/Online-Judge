#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;
        int arr[N];
        for (int i = 0; i < N; i++)
            arr[i] = 0;

        for (int i = 0; i < M; i++)
        {
            for (int i = 0; i < N; i++)
            {
                int tmp;
                cin >> tmp;
                arr[i] += tmp;
            }
        }

        int ans = 0;
        for (int i = 0; i < N; i++)
            if (arr[ans] < arr[i])
                ans = i;

        cout << ans + 1 << '\n';
    }

    return 0;
}