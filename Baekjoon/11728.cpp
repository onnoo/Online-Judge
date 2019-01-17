#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, M, tmp;
    vector<int> v;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N + M; i++)
    {
        scanf("%d", &tmp);
        v.emplace_back(tmp);
    }
    sort(v.begin(), v.end());

    for (int i : v)
        printf("%d ", i);

    return 0;
}