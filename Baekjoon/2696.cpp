#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int M;
        cin >> M;
        cout << (M / 2) + 1 << '\n';
        int arr[M];
        bool chk = true;
        for (int i = 0; i < M; i++, chk = !chk)
        {
            cin >> arr[i];
            if (chk)
            {
                sort(arr, arr + i + 1);
                cout << arr[i / 2] << (i % 18 ? ' ' : '\n');
            }
        }
    }

    return 0;
}