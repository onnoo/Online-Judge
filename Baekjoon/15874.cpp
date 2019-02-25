#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
    int K, S;
    scanf("%d%d", &K, &S);
    K %= 26;
    char str[S];
    scanf(" %[^\n]", str);

    printf("K : %d\n", K);
    for (int i = 0; i < S; i++)
    {
        int c = str[i];
        if (!isalpha(c))
        {
            printf("%c", c);
        }
        else
        {
            if (isupper(c))
            {
                c += K;
                if (c > 'Z')
                    c -= 26;
            }
            else
            {
                c += K;
                if (c > 'z')
                    c -= 26;
            }
            printf("%c", c);
        }
    }
    printf("\n");

    return 0;
}