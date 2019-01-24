#include <iostream>

using namespace std;

int main(void)
{
    int total = 0;
    int tmp;
    while ((scanf("%d", &tmp)) != EOF)
    {
        total += tmp;
    }

    printf("%d\n", total);

    return 0;
}