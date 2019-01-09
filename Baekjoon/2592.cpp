#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> freq(100, 0);
    int avg = 0;

    for (int i = 0; i < 10; i++)
    {
        int num;
        scanf("%d", &num);
        avg += num;
        freq[num / 10]++;
    }

    avg /= 10;
    int max_freq = 0;
    for (int i = 0; i < 100; i++)
    {
        if (max_freq < freq[i])
            max_freq = i;
    }

    printf("%d\n%d\n", avg, max_freq * 10);

    return 0;
}