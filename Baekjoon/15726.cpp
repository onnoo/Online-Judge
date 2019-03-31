#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    double A, B, C;
    cin >> A >> B >> C;

    if (B > C)
    {
        B /= C;
        printf("%d\n", (int)(A * B));
    }
    else
    {
        A /= B;
        printf("%d\n", (int)(A * C));
    }

    return 0;
}