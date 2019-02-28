#include <iostream>

using namespace std;

int main(void)
{
    int N, ans = 0;
    scanf("%d", &N);
    char s[N + 1];
    scanf("%s", s);

    for (int i = 0; s[i]; i++)
        ans += s[i] - 64;

    printf("%d\n", ans);

    return 0;
}