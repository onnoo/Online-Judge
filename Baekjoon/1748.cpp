#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    long long count = 0;

    int size = 0;
    for (int i = 1; i <= 9; i++)
    {
        if (N < pow(10, i))
        {
            size = i;
            break;
        }
    }

    for (int i = 1; i < size; i++)
    {
        count += (pow(10, i) - pow(10, i - 1)) * i;
    }

    count += (N - pow(10, size - 1) + 1) * size;

    printf("%lld\n", count);
    return 0;
}