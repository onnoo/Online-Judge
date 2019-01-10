#include <iostream>

using namespace std;

int main(void)
{
    int T;
    scanf("%d", &T);

    int A = 5 * 60;
    int B = 1 * 60;
    int C = 10;

    int A_count = T / A;
    T -= A_count * A;
    int B_count = T / B;
    T -= B_count * B;
    int C_count = T / C;
    T -= C_count * C;

    if (T != 0)
        printf("-1\n");
    else
        printf("%d %d %d\n", A_count, B_count, C_count);

    return 0;
}