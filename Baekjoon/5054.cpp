#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int T;
    scanf("%d", &T);

    vector<int> v;
    for (int t = 0; t < T; t++)
    {
        int N;
        scanf("%d", &N);

        int min = 0;
        for (int i = 0; i < N; i++)
        {
            int tmp;
            scanf("%d", &tmp);
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        printf("%d\n", (v[N - 1] - v[0]) * 2);
        v.clear();
    }

    return 0;
}