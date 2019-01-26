#include <iostream>

using namespace std;

int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        for (int i = 2; i <= N; i++)
        {
            int cnt = 0;
            while (!(N % i))
            {
                cnt++;
                N /= i;
            }
            if (cnt)
                printf("%d %d\n", i, cnt);
        }
    }

    return 0;
}