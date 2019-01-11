#include <iostream>

using namespace std;

int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);

    int date = A * 100 + B;
    if (date < 218)
        printf("Before\n");
    else if (date > 218)
        printf("After\n");
    else
        printf("Special\n");

    return 0;
}