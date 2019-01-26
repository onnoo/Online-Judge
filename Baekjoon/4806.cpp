#include <iostream>

using namespace std;

int main(void)
{
    int cnt = 0;
    char c;
    while (cin.get(c))
        if (c == '\n')
            cnt++;

    printf("%d\n", cnt);

    return 0;
}