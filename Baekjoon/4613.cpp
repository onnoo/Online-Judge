#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> v;
    vector<bool> tmp;
    int M, N, sum = 0;

    scanf("%d %d", &M, &N);
    tmp.assign(N + 1, true);

    for (int i = 2; i <= N; i++)
    {
        if (tmp[i])
        {
            if (i >= M)
            {
                v.push_back(i);
                sum += i;
            }
            for (int j = i; j <= N; j += i)
                tmp[j] = false;
        }
    }
    if (v.empty())
        printf("-1\n");
    else
        printf("%d\n%d\n", sum, v[0]);

    return 0;
}