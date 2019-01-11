#include <iostream>

using namespace std;

int main(void)
{
    int date;
    scanf("%d", &date);

    int tmp;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &tmp);
        if (date == tmp)
            count++;
    }

    printf("%d\n", count);

    return 0;
}