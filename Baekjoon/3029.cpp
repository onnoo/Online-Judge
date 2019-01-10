#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    string begin_time, end_time;

    cin >> begin_time;
    cin >> end_time;

    int begin_hh = stoi(begin_time.substr(0, 2).c_str());
    int begin_mm = stoi(begin_time.substr(3, 2).c_str());
    int begin_ss = stoi(begin_time.substr(6, 2).c_str());

    int end_hh = stoi(end_time.substr(0, 2).c_str());
    int end_mm = stoi(end_time.substr(3, 2).c_str());
    int end_ss = stoi(end_time.substr(6, 2).c_str());

    int wait_hh = 0;
    int wait_mm = 0;
    int wait_ss = 0;

    wait_ss = end_ss - begin_ss;
    if (wait_ss < 0)
    {
        wait_mm--;
        wait_ss += 60;
    }

    wait_mm += end_mm - begin_mm;
    if (wait_mm < 0)
    {
        wait_hh--;
        wait_mm += 60;
    }

    wait_hh += end_hh - begin_hh;
    if (wait_hh < 0)
    {
        wait_hh += 24;
    }

    if (wait_hh == 0 && wait_mm == 0 && wait_ss == 0)
        printf("24:00:00\n");
    else
        printf("%02d:%02d:%02d\n", wait_hh, wait_mm, wait_ss);

    return 0;
}