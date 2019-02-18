#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);

    vector<int> v;

    int tmp;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &tmp);
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    printf("%d\n", v[K - 1]);

    return 0;
}