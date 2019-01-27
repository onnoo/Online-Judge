#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    int N;
    scanf("%d", &N);
    char *s = (char *)malloc(sizeof(char) * (N + 1));
    scanf("%s", s);

    bool five = true, multi = false;
    int phase = 0;
    for (int i = 0; i < N; i++)
    {
        if (s[i] == 'W')
            phase++;
        else if (s[i] == 'P' && phase < 2)
        {
            if (phase == 1)
                multi = true;
            five = !five;
        }
    }

    int ans;
    if (phase < 2)
        ans = 0;
    else
    {
        if (multi)
            ans = 6;
        else if (five)
            ans = 5;
        else
            ans = 1;
    }
    printf("%d\n", ans);

    return 0;
}