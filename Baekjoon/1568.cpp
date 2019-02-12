#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    int count = 0;

    int k = 1;
    while (N != 0)
    {
        if (k > N)
            k = 1;
        for (int i = 1; i <= k; i++)
        {
            N--;
        }
        k++;
        count++;
    }

    printf("%d\n", count);

    return 0;
}