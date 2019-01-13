#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    while (!(a == 0 && b == 0 && c == 0))
    {

        if (a == b && b == c && c == a)
            printf("Equilateral\n");
        else if ((a >= b && a >= c && a < b + c) || (b >= a && b >= c && b < a + c) || (c >= a && c >= b && c < a + b))
        {
            if (a != b && b != c && c != a)
                printf("Scalene\n");
            else
                printf("Isosceles\n");
        }
        else
            printf("Invalid\n");
        scanf("%d %d %d", &a, &b, &c);
    }

    return 0;
}