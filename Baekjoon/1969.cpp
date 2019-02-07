#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;

    int **arr = (int **)malloc(sizeof(int *) * M);
    for (int i = 0; i < M; i++)
        arr[i] = (int *)calloc(4, sizeof(int));

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; s[j]; j++)
        {
            if (s[j] == 'A')
                arr[j][0]++;
            else if (s[j] == 'C')
                arr[j][1]++;
            else if (s[j] == 'G')
                arr[j][2]++;
            else
                arr[j][3]++;
        }
    }

    string ans = "";
    int cnt = 0;

    for (int i = 0; i < M; i++)
    {
        int idx = 0;
        for (int j = 0; j < 4; j++)
            if (arr[i][idx] < arr[i][j])
                idx = j;
        cnt += N - arr[i][idx];

        if (idx == 0)
            ans += 'A';
        else if (idx == 1)
            ans += 'C';
        else if (idx == 2)
            ans += 'G';
        else
            ans += 'T';
    }

    cout << ans << '\n'
         << cnt << '\n';

    return 0;
}