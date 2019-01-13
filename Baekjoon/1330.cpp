#include <iostream>

using namespace std;

int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);
    if (A > B)
        printf(">\n");
    else if (A < B)
        printf("<\n");
    else
        printf("==\n");

    return 0;
}