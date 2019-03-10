#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d\n", &N);

    int total = 1;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        total += tmp - 1;
    }

    printf("%d\n", total);

    return 0;
}