#include <iostream>
#include <string>

using namespace std;

bool p1win(char p1, char p2)
{
    if ((p1 == 'R' && p2 == 'S') || (p1 == 'S' && p2 == 'P') || (p1 == 'P' && p2 == 'R'))
        return true;
    return false;
}

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int N;
        scanf("%d", &N);
        int s1 = 0, s2 = 0;
        for (int i = 0; i < N; i++)
        {
            char p1, p2;
            cin >> p1;
            cin >> p2;
            if (p1 != p2)
            {
                if (p1win(p1, p2))
                    s1++;
                else
                    s2++;
            }
        }
        if (s1 > s2)
            printf("Player 1\n");
        else if (s2 > s1)
            printf("Player 2\n");
        else
            printf("TIE\n");
    }

    return 0;
}