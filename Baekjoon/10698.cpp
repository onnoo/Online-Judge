#include <iostream>

using namespace std;

int main(void)
{
    char op;
    int T, X, Y, Z;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %c %d = %d", &X, &op, &Y, &Z);
        printf("Case %d: ", i);
        if ((op == '+' && X + Y == Z) || (op == '-' && X - Y == Z))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}