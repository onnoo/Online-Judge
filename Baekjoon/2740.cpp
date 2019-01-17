#include <iostream>

using namespace std;

int main(void)
{
    int N, M, K;
    scanf("%d %d", &N, &M);
    int arrA[N][M];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", arrA[i] + j);
    scanf("%d %d", &M, &K);
    int arrB[M][K];
    for (int i = 0; i < M; i++)
        for (int j = 0; j < K; j++)
            scanf("%d", arrB[i] + j);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            int result = 0;
            for (int k = 0; k < M; k++)
            {
                result += arrA[i][k] * arrB[k][j];
            }
            printf("%d ", result);
        }
        printf("\n");
    }

    return 0;
}