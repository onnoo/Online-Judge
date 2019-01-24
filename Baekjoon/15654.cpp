#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> v, tmp;
vector<bool> chk;

void per(int i)
{
    if (i == M)
    {
        for (int n : tmp)
            printf("%d ", n);
        printf("\n");
    }
    else
    {
        for (int j = 0; j < N; j++)
        {
            if (!chk[j])
            {
                chk[j] = true;
                tmp[i] = v[j];
                per(i + 1);
                chk[j] = false;
            }
            else
                continue;
        }
    }
}

int main(void)
{
    int num;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    tmp.assign(M, 0);
    chk.assign(N, false);

    // for (int i : tmp)
    //     printf("%d ", i);
    // printf("\n");

    per(0);

    return 0;
}