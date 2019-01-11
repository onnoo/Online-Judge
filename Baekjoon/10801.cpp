#include <iostream>

using namespace std;

int main(void)
{
    int A[10], B[10];

    for (int i = 0; i < 10; i++)
        scanf("%d", A + i);
    for (int i = 0; i < 10; i++)
        scanf("%d", B + i);

    int score_A = 0, score_B = 0;
    for (int i = 0; i < 10; i++)
    {
        if (A[i] > B[i])
            score_A++;
        else if (A[i] < B[i])
            score_B++;
    }

    if (score_A > score_B)
        printf("A\n");
    else if (score_A < score_B)
        printf("B\n");
    else
        printf("D\n");

    return 0;
}