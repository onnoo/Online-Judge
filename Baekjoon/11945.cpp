#include <iostream>

using namespace std;

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        char str[M + 1];
        scanf("%s", str);
        for (int j = M - 1; j >= 0; j--)
            printf("%c", str[j]);
        printf("\n");
    }

    return 0;
}