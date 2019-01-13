#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    int A = 0, B = 0;
    for (int i = 0; i < N; i++)
    {
        int score_A, score_B;
        scanf("%d %d", &score_A, &score_B);
        if (score_A > score_B)
            A++;
        else if (score_A < score_B)
            B++;
    }

    printf("%d %d\n", A, B);

    return 0;
}