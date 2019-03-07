#include <iostream>

using namespace std;

int main(void)
{
    int N, score[3] = {0, 0, 0}, time_prev = 0;
    int win_time[3] = {0, 0, 0};
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int t, MM, SS, time_now;
        scanf("%d %d:%d", &t, &MM, &SS);
        time_now = MM * 60 + SS;

        if (score[1] > score[2])
            win_time[1] += time_now - time_prev;
        else if (score[2] > score[1])
            win_time[2] += time_now - time_prev;
        time_prev = time_now;
        score[t]++;
    }
    if (score[1] > score[2])
        win_time[1] += 48 * 60 - time_prev;
    else if (score[2] > score[1])
        win_time[2] += 48 * 60 - time_prev;

    printf("%02d:%02d\n", win_time[1] / 60, win_time[1] % 60);
    printf("%02d:%02d\n", win_time[2] / 60, win_time[2] % 60);

    return 0;
}