#include <iostream>

using namespace std;

int main(void)
{
    char word[101];
    scanf("%s", word);

    int *count = (int *)calloc(26, sizeof(int));

    for (int i = 0; word[i]; i++)
    {
        count[word[i] - 97]++;
    }

    printf("HERE\n");

    for (int i = 0; i < 26; i++)
    {
        printf("%d ", count[i]);
    }

    return 0;
}