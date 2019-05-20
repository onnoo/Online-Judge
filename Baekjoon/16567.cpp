#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool arr[1000001];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<int, vector<int>, greater<int>> q;
    bool cmd;
    int N, M, cnt = 0, num;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        cnt += (arr[i] && (i < 1 || !arr[i - 1]));
    }

    while (M--)
    {
        cin >> cmd;
        if (cmd == 0)
        {
            cout << cnt << '\n';
        }
        else
        {
            cin >> num;
            num--;
            if (!arr[num])
            {
                arr[num] = true;
                int chk = 0;

                if (num > 0)
                    chk += arr[num - 1];
                if (num < N - 1)
                    chk += arr[num + 1];

                if (chk == 0)
                    cnt++;
                else if (chk == 2)
                    cnt--;
            }
        }
    }

    return 0;
}