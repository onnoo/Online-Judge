#include <iostream>

using namespace std;

int main(void)
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        total += tmp;
    }
    printf("%d\n", total);

    return 0;
}