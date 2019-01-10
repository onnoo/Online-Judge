#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int len;
        scanf("%d", &len);

        char arr[len][len];
        for (int row = 0; row < len; row++)
        {
            for (int col = 0; col < len; col++)
            {
                if (row == 0 || row == len - 1 || col == 0 || col == len - 1)
                    arr[row][col] = '#';
                else
                    arr[row][col] = 'J';
            }
        }

        for (int row = 0; row < len; row++)
        {
            for (int col = 0; col < len; col++)
            {
                printf("%c", arr[row][col]);
            }
            printf("\n");
        }
        if (i != N - 1)
            printf("\n");
    }
    return 0;
}