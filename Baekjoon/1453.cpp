#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    vector<bool> v(100, true);

    int seat;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &seat);
        if (v[seat - 1])
            v[seat - 1] = false;
        else
            count++;
    }

    printf("%d\n", count);

    return 0;
}