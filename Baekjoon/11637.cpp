#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(void)
{
    int T;
    scanf("%d", &T);
    vector<pair<int, int>> v;
    while (T--)
    {
        int N, tmp, sum = 0;
        scanf("%d", &N);
        for (int i = 1; i <= N; i++)
        {
            scanf("%d", &tmp);
            sum += tmp;
            v.push_back(make_pair(tmp, i));
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());

        if (v[0].first == v[1].first)
            printf("no winner\n");
        else
        {
            if (v[0].first > sum / 2)
                printf("majority winner %d\n", v[0].second);
            else
                printf("minority winner %d\n", v[0].second);
        }
        v.clear();
    }
    return 0;
}