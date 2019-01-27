#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, ans;
    cin >> N >> M;
    int *score = (int *)calloc(N, sizeof(int));
    int *target = (int *)malloc(sizeof(int) * M);
    for (int i = 0; i < M; i++)
        cin >> target[i];

    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
        {
            cin >> ans;
            if (ans == target[i])
                score[j]++;
            else
                score[target[i] - 1]++;
        }

    for (int i = 0; i < N; i++)
        cout << score[i] << '\n';

    return 0;
}