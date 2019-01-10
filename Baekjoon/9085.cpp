#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int sz;
        scanf("%d", &sz);
        int total = 0;
        for (int j = 0; j < sz; j++)
        {
            int add;
            scanf("%d", &add);
            total += add;
        }
        printf("%d\n", total);
    }

    return 0;
}