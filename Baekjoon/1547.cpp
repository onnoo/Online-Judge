#include <iostream>

using namespace std;

int main(void)
{
    int M;
    scanf("%d", &M);

    bool arr[] = {true, false, false};

    for (int i = 0; i < M; i++)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);
        bool tmp = arr[X - 1];
        arr[X - 1] = arr[Y - 1];
        arr[Y - 1] = tmp;
    }

    for (int i = 0; i < 3; i++)
        if (arr[i])
            printf("%d\n", i + 1);

    return 0;
}