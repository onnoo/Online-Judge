#include <iostream>

using namespace std;

int main(void)
{
    int arr[5];

    for (int i = 0; i < 5; i++)
        scanf("%d", arr + i);

    bool con = true;
    while (con)
    {
        for (int i = 0; i < 4; i++)
            if (arr[i] > arr[i + 1])
            {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                for (int k = 0; k < 5; k++)
                    printf("%d ", arr[k]);
                printf("\n");
            }
        con = false;
        for (int i = 0; i < 5; i++)
            if (arr[i] != i + 1)
                con = true;
    }

    return 0;
}