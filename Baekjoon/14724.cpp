#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    char teams[9][10] = {"PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY"};
    int N, tmp, max, max_team, max_val;
    scanf("%d", &N);

    max_team = max_val = 0;
    for (int i = 0; i < 9; i++)
    {
        max = 0;
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &tmp);
            if (tmp > max)
                max = tmp;
        }
        if (max > max_val)
        {
            max_val = max;
            max_team = i;
        }
    }
    printf("%s\n", teams[max_team]);
    return 0;
}