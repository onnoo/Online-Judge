#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    int divider;
    scanf("%d", &divider);

    int tmp = N % 100;
    N -= tmp;

    int result = 0;
    while ((N + result) % divider)
        result++;

    if (result < 10)
        printf("0");
    printf("%d\n", result);

    return 0;
}