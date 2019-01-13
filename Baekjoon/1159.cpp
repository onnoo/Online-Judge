#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    int *arr = (int *)calloc(26, sizeof(int));

    for (int i = 0; i < N; i++)
    {
        char *name = (char *)malloc(sizeof(char) * 31);
        scanf("%s", name);
        arr[name[0] - 97]++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] >= 5)
        {
            printf("%c", (char)(97 + i));
            count++;
        }
    }
    if (count == 0)
        printf("PREDAJA\n");
    else
        printf("\n");

    return 0;
}