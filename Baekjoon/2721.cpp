#include <iostream>

using namespace std;

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n;
        scanf("%d", &n);

        int W = 0, K = 1;
        for (int i = 1; i <= n; i++)
            W += i * (K += i + 1);
        printf("%d\n", W);
    }

    return 0;
}