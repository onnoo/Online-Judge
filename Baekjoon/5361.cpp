#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    double price[5] = {350.34, 230.90, 190.55, 125.30, 180.90};

    for (int i = 0; i < N; i++)
    {
        double total = 0;
        for (int j = 0; j < 5; j++)
        {
            int count;
            scanf("%d", &count);
            total += count * price[j];
        }
        printf("$%.2lf\n", total);
    }

    return 0;
}