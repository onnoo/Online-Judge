#include <iostream>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    int score = 0;
    int add = 1;
    int check;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &check);
        if (check)
        {
            score += add;
            add++;
        }
        else
        {
            add = 1;
        }
    }

    printf("%d\n", score);

    return 0;
}