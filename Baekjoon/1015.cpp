#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

vector<pair<int, int>> v;
int *ans;

int main(void)
{
    int N, tmp;
    scanf("%d", &N);
    ans = (int *)calloc(N, sizeof(int));
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &tmp);
        v.push_back(make_pair(tmp, i));
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < N; i++)
        ans[v[i].second] = i;
    for (int i = 0; i < N; i++)
        printf("%d ", ans[i]);
    printf("\n");
    return 0;
}