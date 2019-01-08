#include <iostream>

using namespace std;

int main(void)
{
    int begin, end;

    scanf("%d %d", &begin, &end);

    int total = 0;

    int add = 1;

    for (int i = 1; i <= end;)
    {
        for (int j = 0; j < add && i <= end; j++)
        {
            if (begin <= i)
            {
                total += add;
            }
            i++;
        }
        add++;
    }

    printf("%d\n", total);

    return 0;
}