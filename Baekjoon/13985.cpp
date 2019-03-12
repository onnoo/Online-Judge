#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C;
    scanf("%d + %d = %d", &A, &B, &C);
    printf("%s\n", A + B == C ? "YES" : "NO");

    return 0;
}