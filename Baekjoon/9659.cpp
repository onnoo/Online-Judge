#include <iostream>

using namespace std;

int main(void)
{
    long long N;
    cin >> N;
    bool SK = true;
    if (N / 3 % 2 == 0)
    {
        SK = false;
    }
    N %= 3;
    while (N > 0)
    {
        SK = !SK;
        N--;
    }

    if (SK)
        printf("SK\n");
    else
        printf("CY\n");

    return 0;
}