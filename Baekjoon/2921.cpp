#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    int count = 0;
    for (int i = 0; i <= N; i++)
        for (int j = i; j <= N; j++)
            count += i + j;

    printf("%d\n", count);

    return 0;
}