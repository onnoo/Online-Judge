#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int fee[4] = {0}, ans = 0;
    cin >> fee[1] >> fee[2] >> fee[3];
    fee[2] *= 2;
    fee[3] *= 3;

    int *arr = (int *)calloc(100, sizeof(int));
    for (int t = 0; t < 3; t++)
    {
        int F, T;
        cin >> F >> T;
        for (int i = F; i < T; i++)
            arr[i]++;
    }

    for (int i = 0; i < 100; i++)
        ans += fee[arr[i]];

    cout << ans << '\n';

    return 0;
}