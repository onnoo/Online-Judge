#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> v, tmp;
vector<bool> chk;

void per(int idx)
{
    if (idx == M)
    {
        for (int i : tmp)
            printf("%d ", i);
        printf("\n");
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            if (chk[i])
                continue;
            chk[i] = true;
            tmp[idx] = v[i];
            per(idx + 1);
            chk[i] = false;
        }
    }
}

int main(void)
{
    scanf("%d %d", &N, &M);
    for (int i = 1; i <= N; i++)
        v.push_back(i);
    tmp.assign(M, 0);
    chk.assign(N, false);
    per(0);

    return 0;
}