#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, t1, t2;
    cin >> N >> t1 >> t2;

    queue<int> q;

    for (int i = 1; i <= N; i++)
        q.push(i);

    int num = 1, ans = -1;
    while (q.size() != 1)
    {
        int left = q.size();
        while (left)
        {
            int player1 = q.front();
            q.pop();
            left--;
            if (left > 0)
            {
                int player2 = q.front();
                q.pop();
                left--;
                if ((player1 == t1 && player2 == t2) || (player1 == t2 && player2 == t1))
                    ans = num;
                if (player1 == t1 || player1 == t2)
                    q.push(player1);
                else if (player2 == t1 || player2 == t2)
                    q.push(player2);
                else
                    q.push(player1);
            }
            else
            {
                q.push(player1);
            }
        }
        num++;
    }
    cout << ans << '\n';

    return 0;
}