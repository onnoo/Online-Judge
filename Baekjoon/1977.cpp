#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int M, N;
    scanf("%d %d", &M, &N);

    int total = 0;

    for (int i = ceil(sqrt(M)); i <= floor(sqrt(N)); i++)
    {
        total += pow(i, 2);
    }

    if (total == 0)
        printf("-1\n");
    else
        printf("%d\n%d\n", total, (int)pow(ceil(sqrt(M)), 2));

    return 0;
}