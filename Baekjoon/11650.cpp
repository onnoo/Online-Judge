#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, x, y;
    scanf("%d", &N);
    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &y);
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
    {
        printf("%d %d\n", v[i].first, v[i].second);
    }

    return 0;
}