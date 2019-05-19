#include <iostream>

using namespace std;

int arr[151];
bool visit[151];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K;

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int M = 0;
    int idx = 0;
    while (!visit[idx])
    {
        visit[idx] = true;
        M++;
        idx = arr[idx];
        if (idx == K)
        {
            cout << M << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';

    return 0;
}