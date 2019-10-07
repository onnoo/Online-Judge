#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

typedef struct user
{
    int id = 0;
    int solve = 0;
    int score = 0;
}user;

int comp(user a, user b)
{
    if (a.solve == b.solve)
    {
        return a.score < b.score;
    }
    return a.solve > b.solve;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int K;
    cin >> K;

    for (int c = 1; c <= K; c++)
    {
        char tmp;
        int M, N, P, p, m, t, j;
        
        cin >> M >> N >> P;
        int arr[P][M];
        fill_n(arr[0], P * M, 0);

        for (int i = 0; i < N; i++)
        {
            cin >> p >> tmp >> t >> j;
            p--;
            m = tmp - 'A';
            
            if (arr[p][m] <= 0)
            {
                if (j == 0)
                {
                    arr[p][m]--;
                }
                else
                {
                    arr[p][m] = t + arr[p][m] * -20;
                }
            }
        }

        user score[P];
        for (int i = 0; i < P; i++)
        {
            score[i].id = i + 1;
            for (int j = 0; j < M; j++)
            {
                if (arr[i][j] > 0)
                {
                    score[i].solve++;
                    score[i].score += arr[i][j];
                }
            }
        }
        sort(score, score + P, comp);

        cout << "Data Set " << c << ":\n";
        for (int i = 0; i < P; i++)
        {
            cout << score[i].id << ' ' << score[i].solve << ' ' << score[i].score << '\n';
        }
        cout << '\n';
    }
    return 0;
}