#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int a, b;

    cin >> a;
    cin >> b;

    printf("%d\n", a * (b % 10));

    printf("%d\n", a * ((b - b % 10) % 100) / 10);
    printf("%d\n", a * (b / 100));

    printf("%d\n", a * b);

    return 0;
}