#include <iostream>

using namespace std;

int main(void)
{
    int S = 0, T = 0;
    int tmp;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &tmp);
        S += tmp;
    }
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &tmp);
        T += tmp;
    }

    if (S >= T)
        printf("%d\n", S);
    else
        printf("%d\n", T);

    return 0;
}