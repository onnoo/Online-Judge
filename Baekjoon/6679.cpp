#include <iostream>
#include <string>

using namespace std;

int sum(int n, int base)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % base;
        n /= base;
    }
    return sum;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    int tmp;
    for (int n = 1000; n <= 9999; n++)
    {
        if ((tmp = sum(n, 16)) == sum(n, 12) && tmp == sum(n, 10))
            cout << n << '\n';
    }
    return 0;
}