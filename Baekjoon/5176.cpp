#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int P, M;
        scanf("%d %d", &P, &M);

        bool *arr = (bool *)calloc(M, sizeof(bool));

        int count = 0;
        for (int j = 0; j < P; j++)
        {
            int tmp;
            scanf("%d", &tmp);
            if (!arr[tmp - 1])
                arr[tmp - 1] = true;
            else
                count++;
        }
        printf("%d\n", count);
    }

    return 0;
}