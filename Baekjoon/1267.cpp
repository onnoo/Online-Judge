#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    int price_Y = 0;
    int price_M = 0;
    for (int i = 0; i < N; i++)
    {
        int t;
        scanf("%d", &t);
        price_Y += ((t / 30) + 1) * 10;
        price_M += ((t / 60) + 1) * 15;
    }

    if (price_Y < price_M)
        printf("%c %d\n", 'Y', price_Y);
    else if (price_Y > price_M)
        printf("%c %d\n", 'M', price_M);
    else
        printf("Y M %d\n", price_M);

    return 0;
}