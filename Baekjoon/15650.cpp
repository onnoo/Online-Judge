#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> v, tmp;

void per(int idx, int target)
{
    if (idx == M)
    {
        for (int i : tmp)
            printf("%d ", i);
        printf("\n");
    }
    else
    {
        for (int i = target; i < N; i++)
        {
            tmp[idx] = v[i];
            per(idx + 1, i + 1);
        }
    }
}

int main(void)
{
    scanf("%d %d", &N, &M);

    for (int i = 1; i <= N; i++)
        v.push_back(i);
    tmp.assign(M, 0);
    per(0, 0);
    return 0;
}