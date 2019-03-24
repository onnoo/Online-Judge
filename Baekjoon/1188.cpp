#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, cnt = 0;
    cin >> N >> M;

    queue<int> q;
    N %= M;
    for (int i = 0; i < N; i++)
        q.push(M);

    int num = 0, tmp = N;
    while (!q.empty())
    {
        if (num <= 0)
        {
            num = q.front();
            q.pop();
        }

        if (num >= tmp)
        {
            num -= tmp;
            tmp = N;
        }
        else
        {
            tmp -= num;
            num = 0;
        }

        if (num > 0)
        {
            cnt++;
            q.push(num);
            num = 0;
        }
    }

    cout << cnt << '\n';

    return 0;
}