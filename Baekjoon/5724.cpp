#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);
    while (N)
    {
        long long cnt = 0;
        for (int i = 1; i <= N; i++)
            cnt += i * i;
        printf("%lld\n", cnt);
        scanf("%d", &N);
    }

    return 0;
}