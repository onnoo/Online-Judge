#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N[3], num, msz = 0, sum = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> N[i];
        if (msz < N[i])
            msz = N[i];
    }

    priority_queue<int, vector<int>, less<int>> q[3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < N[i]; j++)
        {
            cin >> num;
            sum += num;
            q[i].push(num);
        }
    }

    cout << sum << '\n';

    int cnt, ans = 0;
    for (int i = 0; i < msz; i++)
    {
        sum = cnt = 0;
        for (int j = 0; j < 3; j++)
        {
            if (!q[j].empty())
            {
                cnt++;
                sum += q[j].top();
                q[j].pop();
            }
        }
        if (cnt == 3)
            sum *= 0.9;

        ans += sum;
    }

    cout << ans << '\n';

    return 0;
}