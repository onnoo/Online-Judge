#include <iostream>

int w, h;

void search(int *arr, int x, int y);

int main(void)
{
    scanf("%d %d", &w, &h);

    while (w != 0 || h != 0)
    {
        int count = 0;

        int *arr = (int *)malloc(sizeof(int) * h * w);
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                scanf("%d", arr + i * w + j);
            }
        }
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (*(arr + i * w + j) == 1)
                {
                    count++;
                    search(arr, j, i);
                }
            }
        }

        printf("%d\n", count);
        free(arr);
        scanf("%d %d", &w, &h);
    }

    return 0;
}

void search(int *arr, int x, int y)
{
    *(arr + y * w + x) = 0;
    for (int i = y - 1; i <= y + 1; i++)
    {
        for (int j = x - 1; j <= x + 1; j++)
        {
            if (j < 0 || i < 0 || j >= w || y >= h)
                continue;

            if (*(arr + i * w + j) == 1)
                search(arr, j, i);
        }
    }
}