#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int C, K, target;
    scanf("%d%d", &C, &K);
    target = C % (int)pow(10, K);
    if (target / pow(10, K - 1) < 5)
        printf("%d\n", C - target);
    else
        printf("%d\n", C + ((int)pow(10, K) - target));

    return 0;
}