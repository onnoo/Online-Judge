#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> v;

void per(int i)
{
    if (i == M)
    {
        for (int n : v)
            printf("%d ", n);
        printf("\n");
    }
    else
    {
        while (v[i] <= N)
        {
            per(i + 1);
            v[i]++;
        }
        v[i] = 1;
    }
}

int main(void)
{
    scanf("%d %d", &N, &M);
    v.assign(M, 1);
    per(0);

    return 0;
}