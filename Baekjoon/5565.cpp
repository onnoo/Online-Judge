#include <iostream>

using namespace std;

int main(void)
{
    int total;
    scanf("%d", &total);
    for (int i = 0; i < 9; i++)
    {
        int price;
        scanf("%d", &price);
        total -= price;
    }

    printf("%d\n", total);

    return 0;
}