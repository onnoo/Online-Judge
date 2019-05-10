#include <iostream>

using namespace std;

bool chk[1005];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, num;
    long long sum = 0;
    cin >> N >> M;

    while (M--)
    {
        cin >> num;
        for (int i = num; i <= N; i += num)
        {
            if (!chk[i])
            {
                sum += i;
                chk[i] = true;
            }
        }
    }
    cout << sum << '\n';

    return 0;
}