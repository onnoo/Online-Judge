#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (A + D > B + C)
        printf("%d\n", B + C);
    else
        printf("%d\n", A + D);

    return 0;
}