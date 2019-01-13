#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    int P, Q1, prev;
    double Q2;
    scanf("%d", &P);

    int tmp;
    scanf("%d", &tmp);
    prev = tmp;

    Q1 = tmp - P;
    Q2 = (double)tmp / P;

    bool isArit = true;
    bool isGeom = true;
    for (int i = 2; i < N; i++)
    {
        scanf("%d", &tmp);
        if (prev + Q1 != tmp)
            isArit = false;
        if (prev * Q2 != tmp)
            isGeom = false;
        prev = tmp;
    }

    if (isArit)
        printf("%d\n", prev + Q1);
    else
        printf("%d\n", (int)(prev * Q2));

    return 0;
}