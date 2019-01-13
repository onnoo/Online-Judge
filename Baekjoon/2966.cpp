#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    char *s = (char *)malloc(sizeof(char) * N);
    scanf("%s", s);

    int score[3] = {0, 0, 0};
    char ans[3][7] = {"ABC", "BABC", "CCAABB"};
    char name[3][7] = {"Adrian", "Bruno", "Goran"};

    for (int i = 0; i < s[i]; i++)
        for (int j = 0; j < 3; j++)
            if (s[i] == ans[j][i % strlen(ans[j])])
            {
                score[j]++;
            }

    int max = -1;
    for (int i = 0; i < 3; i++)
        if (score[i] > max)
            max = score[i];

    printf("%d\n", max);
    for (int i = 0; i < 3; i++)
    {
        if (score[i] == max)
            printf("%s\n", name[i]);
    }

    return 0;
}