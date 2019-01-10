#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    printf("%d %d\n", v[0], v[N - 1]);

    return 0;
}