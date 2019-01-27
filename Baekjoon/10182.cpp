#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        char s[3];
        double n;
        scanf("%s = %lf", s, &n);
        if (s[0] == 'H')
        {
            printf("%.2lf\n", -1 * log10(n) + 1e-9);
        }
        else
        {
            printf("%.2lf\n", 14 + log10(n) + 1e-9);
        }
    }

    return 0;
}