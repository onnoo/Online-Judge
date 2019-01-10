#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int car;
        scanf("%d", &car);
        int opt;
        scanf("%d", &opt);
        for (int j = 0; j < opt; j++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            car += a * b;
        }
        printf("%d\n", car);
    }

    return 0;
}