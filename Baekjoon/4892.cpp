#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int i = 1;
    while (N != 0)
    {
        printf("%d. ", i++);
        int n1, n2, n3, n4;
        n1 = 3 * N;
        if (n1 % 2 == 0)
            n2 = n1 / 2;
        else
            n2 = (n1 + 1) / 2;
        n3 = 3 * n2;
        n4 = n3 / 9;
        if (n1 % 2 == 0)
            printf("even %d\n", n4);
        else
            printf("odd %d\n", n4);
        cin >> N;
    }
    return 0;
}