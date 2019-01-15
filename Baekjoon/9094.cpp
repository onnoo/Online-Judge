#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int N, M, count = 0;
        cin >> N >> M;

        for (int a = 1; a < N - 1; a++)
            for (int b = a + 1; b < N; b++)
            {
                if ((a * a + b * b + M) % (a * b) == 0)
                    count++;
            }
        printf("%d\n", count);
    }
    return 0;
}