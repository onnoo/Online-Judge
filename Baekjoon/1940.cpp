#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        v.push_back(tmp);
    }

    int count = 0;
    vector<int>::iterator iter;
    for (int i = 0; i < N - 1; i++)
    {
        if (v[i] == 0 || M - v[i] == 0)
            continue;
        iter = find(v.begin() + i + 1, v.end(), M - v[i]);
        if (iter == v.end())
            continue;
        count++;
        v[i] = 0;
        *iter = 0;
    }

    printf("%d\n", count);

    return 0;
}