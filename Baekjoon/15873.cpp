#include <iostream>

using namespace std;

int main(void)
{
    char s[5] = "";
    int A, B;
    scanf("%s", s);
    A = s[0] - 48;
    if (s[1] == '0')
    {
        A *= 10;
        B = s[2] - 48;
    }
    else
        B = s[1] - 48;
    if (s[2] == '0' || s[3] == '0')
        B *= 10;
    printf("%d\n", A + B);

    return 0;
}