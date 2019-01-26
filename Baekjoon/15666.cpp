#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, num;
vector<int> v, tmp;

void per(int idx, int num)
{
    if (idx == M)
    {
        for (int i : tmp)
            printf("%d ", i);
        printf("\n");
    }
    else
    {
        int prev = -1;
        for (int i = 0; i < N; i++)
        {
            if (prev == v[i] || v[i] < num)
                continue;
            tmp[idx] = v[i];
            per(idx + 1, v[i]);
            prev = v[i];
        }
    }
}

int main(void)
{
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    tmp.assign(M, 0);
    per(0, v[0]);

    return 0;
}