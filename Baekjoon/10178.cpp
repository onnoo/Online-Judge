#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int A, B;
        scanf("%d %d", &A, &B);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", A / B, A - B * (A / B));
    }
    return 0;
}