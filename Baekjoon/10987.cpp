#include <iostream>

int main(void)
{
    char word[101];
    int count = 0;

    scanf("%s", word);

    for (int i = 0; word[i]; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u')
            count++;
    }

    printf("%d\n", count);

    return 0;
}