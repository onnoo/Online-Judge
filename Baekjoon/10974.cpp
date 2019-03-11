#include <iostream>

using namespace std;

int N;
int *ans;
bool *include;
void func(int idx)
{
    if (idx == N)
    {
        for (int i = 0; i < N; i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            if (include[i])
                continue;
            include[i] = true;
            ans[idx] = i + 1;
            func(idx + 1);
            include[i] = false;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    ans = (int *)malloc(sizeof(int) * N);
    include = (bool *)calloc(N, sizeof(bool));
    func(0);

    return 0;
}