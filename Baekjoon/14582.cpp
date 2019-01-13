#include <iostream>

using namespace std;

typedef long long ll;

int main(void)
{
    int a[9], b[9];
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", a + i);
    }
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", b + i);
    }

    bool B_counter_win = false;
    bool A_win = false;
    int a_sum = 0, b_sum = 0;
    for (int i = 0; i < 9; i++)
    {
        a_sum += a[i];

        if (a_sum > b_sum)
            A_win = true;
        else
            A_win = false;

        b_sum += b[i];

        if (A_win && a_sum < b_sum)
            B_counter_win = true;
        else if (a_sum >= b_sum)
            B_counter_win = false;
    }

    if (B_counter_win)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
