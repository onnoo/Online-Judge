#include <iostream>

using namespace std;

int main(void)
{
    int *arr = (int *)calloc(26, sizeof(int));

    char s[5001];
    while ((scanf("%s", s)) != EOF)
    {
        for (int i = 0; s[i]; i++)
        {
            arr[s[i] - 97]++;
        }
    }

    int max = 0;
    for (int i = 0; i < 26; i++)
        if (arr[i] > max)
            max = arr[i];

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == max)
            printf("%c", (char)(97 + i));
    }
    printf("\n");

    return 0;
}