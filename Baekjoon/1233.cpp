#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int S1, S2, S3;
    scanf("%d %d %d", &S1, &S2, &S3); // 20 * 20 * 40 = 16000

    int *arr = (int *)calloc(S1 + S2 + S3, sizeof(int)); // 80

    for (int i = 1; i <= S1; i++)
        for (int j = 1; j <= S2; j++)
            for (int k = 1; k <= S3; k++)
                arr[i + j + k - 1]++;

    int result;
    int max = 0;
    for (int i = 1; i <= S1 + S2 + S3; i++)
    {
        if (arr[i - 1] > max)
        {
            result = i;
            max = arr[i - 1];
        }
    }

    printf("%d\n", result);

    return 0;
}