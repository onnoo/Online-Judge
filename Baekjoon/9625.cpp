#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    int A = 1, B = 0;

    int tmp_A, tmp_B;

    for (int i = 0; i < N; i++)
    {
        tmp_A = B;
        tmp_B = A + B;
        A = tmp_A;
        B = tmp_B;
    }

    printf("%d %d\n", A, B);

    return 0;
}