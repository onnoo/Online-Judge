#include <iostream>

using namespace std;

int main(void)
{
    int N, count = 0, tmp;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &tmp);
        if (tmp != i)
            count++;
    }
    printf("%d\n", count);

    return 0;
}