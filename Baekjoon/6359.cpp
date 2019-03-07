#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, N;
    cin >> T;

    while (T--)
    {
        cin >> N;
        bool *room = (bool *)calloc(N + 1, sizeof(bool));
        for (int i = 1; i <= N; i++)
        {
            for (int j = i; j <= N; j += i)
                room[j] = !room[j];
        }

        int cnt = 0;
        for (int i = 1; i <= N; i++)
            if (room[i])
                cnt++;
        cout << cnt << '\n';
        free(room);
    }

    return 0;
}