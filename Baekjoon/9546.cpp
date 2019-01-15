#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int k = 0;
        long long count = 0;
        cin >> k;
        printf("%d\n", (int)(pow(2, k) - 1));
    }

    return 0;
}