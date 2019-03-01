#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
int *arr, *include;

void func(int idx)
{
    if (idx == M)
    {
        for (int i = 0; i < M; i++)
            cout << arr[include[i]] << ' ';
        cout << '\n';
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            include[idx] = i;
            // if (idx != M - 1)
            //     include[idx + 1] = i;
            func(idx + 1);
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    arr = (int *)malloc(sizeof(int) * N);
    include = (int *)calloc(M, sizeof(int));

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);
    func(0);

    return 0;
}