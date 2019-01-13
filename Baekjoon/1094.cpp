#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);
    int stick = 64;
    int sum = 64;
    int count = 1;
    while (N < sum)
    {
        stick /= 2;
        if (sum - stick >= N)
        {
            sum -= stick;
        }
        else
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}