#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    bool SK = false;

    while (N > 3)
    {
        N -= 3;
        SK = !SK;
    }

    while (N != 0)
    {
        N--;
        SK = !SK;
    }

    if (SK)
        printf("SK\n");
    else
        printf("CY\n");

    return 0;
}