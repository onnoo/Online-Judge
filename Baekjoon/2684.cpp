#include <iostream>

using namespace std;

int main(void)
{
    char s[41];
    int *arr;
    int T;
    scanf("%d", &T);
    while (T--)
    {
        arr = (int *)calloc(8, sizeof(int));
        scanf("%s", s);
        for (int i = 0; i < 38; i++)
            arr[(s[i + 2] == 'H') + (s[i + 1] == 'H') * 2 + (s[i] == 'H') * 4]++;

        for (int i = 0; i < 8; i++)
            printf("%d ", arr[i]);
        printf("\n");

        free(arr);
    }
    return 0;
}