#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, cnt = 0;
    cin >> N;

    bool *btn = (bool *)calloc(N, sizeof(bool));
    bool ans[N];
    for (int i = 0; i < N; i++)
        cin >> ans[i];

    for (int i = 0; i < N; i++)
    {
        if (ans[i] != btn[i])
        {
            cnt++;
            for (int j = 0; j < 3; j++)
                btn[i + j] = !btn[i + j];
        }
    }

    cout << cnt << '\n';
    return 0;
}