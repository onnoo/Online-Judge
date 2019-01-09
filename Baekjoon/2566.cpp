#include <iostream>

using namespace std;

int main(void)
{
    int arr[9][9] = {0};

    int max = 0;
    int row, col;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                row = i + 1;
                col = j + 1;
            }
        }
    }

    printf("%d\n%d %d\n", max, row, col);

    return 0;
}