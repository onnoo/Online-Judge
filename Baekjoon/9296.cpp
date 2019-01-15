#include <iostream>

using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int L, count = 0;
        cin >> L;
        char *que = (char *)malloc(sizeof(char) * (L + 1));
        char *ans = (char *)malloc(sizeof(char) * (L + 1));
        scanf("%s", que);
        scanf("%s", ans);

        for (int i = 0; i < L; i++)
            if (que[i] != ans[i])
                count++;

        printf("Case %d: %d\n", t, count);
        free(que);
        free(ans);
    }
    return 0;
}