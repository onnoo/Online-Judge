#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<map<int, int>> v(3);
    int N;
    cin >> N;

    int **arr = (int **)malloc(sizeof(int *) * N);
    for (int i = 0; i < N; i++)
        arr[i] = (int *)malloc(sizeof(int) * 3);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            v[j][arr[i][j]]++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
            if (v[j][arr[i][j]] == 1)
                sum += arr[i][j];
        cout << sum << '\n';
    }

    return 0;
}