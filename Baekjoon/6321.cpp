#include <iostream>

using namespace std;

int main(void)
{
    int T;
    char s[51];
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        scanf("%s", s);
        printf("String #%d\n", t);
        for (int i = 0; s[i]; i++)
            printf("%c", s[i] == 'Z' ? 'A' : s[i] + 1);
        printf("\n\n");
    }
    return 0;
}