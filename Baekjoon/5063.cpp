#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int r, e, c;
        scanf("%d %d %d", &r, &e, &c);
        if (e - c == r)
        {
            printf("does not matter\n");
        }
        else if (e - c > r)
        {
            printf("advertise\n");
        }
        else
        {
            printf("do not advertise\n");
        }
    }

    return 0;
}