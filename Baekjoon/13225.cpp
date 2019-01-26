#include <iostream>

using namespace std;

int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N, cnt = 0;
        scanf("%d", &N);
        for (int i = 1; i <= N; i++)
            if (!(N % i))
                cnt++;
        printf("%d %d\n", N, cnt);
    }
    return 0;
}