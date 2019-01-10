#include <iostream>

using namespace std;

int main(void)
{
    double pre_degree;
    scanf("%lf", &pre_degree);
    double degree;
    while (true)
    {
        scanf("%lf", &degree);
        if (degree == 999)
            break;

        printf("%.2lf\n", degree - pre_degree);
        pre_degree = degree;
    }

    return 0;
}