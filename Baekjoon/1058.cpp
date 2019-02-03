#include <iostream>
#include <string>

using namespace std;

int N;
bool **arr;
bool *friends;

int two(int node, bool adj)
{
    int ret = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[node][i])
        {
            if (!friends[i])
            {
                ret++;
                friends[i] = true;
            }
            if (adj)
                ret += two(i, false);
        }
    }
    return ret;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    arr = (bool **)malloc(sizeof(bool *) * N);

    for (int i = 0; i < N; i++)
    {
        arr[i] = (bool *)malloc(sizeof(bool) * N);
        string s;
        cin >> s;
        for (int j = 0; j < N; j++)
            arr[i][j] = s[j] == 'Y';
    }

    int max = -1;
    for (int i = 0; i < N; i++)
    {
        friends = (bool *)calloc(N, sizeof(bool));
        friends[i] = true;
        int tmp = two(i, true);
        if (tmp > max)
            max = tmp;
        free(friends);
    }

    cout << max << '\n';

    return 0;
}