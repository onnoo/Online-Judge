#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int N;
bool *include;
int *arr;
int ans = 0;

void brute(int cnt, int sum)
{
    if (cnt == 0)
    {
        if (ans < sum)
            ans = sum;
    }
    else
    {
        for (int i = 1; i < N - 1; i++)
        {
            if (include[i])
                continue;
            int head = i - 1;
            int tail = i + 1;
            while (include[tail])
                tail++;
            while (include[head])
                head--;

            include[i] = true;
            brute(cnt - 1, sum + arr[head] * arr[tail]);
            include[i] = false;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    include = (bool *)calloc(N, sizeof(bool));
    arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    brute(N - 2, 0);
    cout << ans << '\n';

    return 0;
}