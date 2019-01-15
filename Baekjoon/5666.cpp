#include <iostream>

using namespace std;

int main(void)
{
    int H, P;
    while ((scanf("%d %d", &H, &P)) != EOF)
    {
        double result = (double)H / P;
        printf("%.2lf\n", result + 1e-9);
    }
    return 0;
}