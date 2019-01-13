#include <iostream>

using namespace std;

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int N;
        scanf("%d", &N);

        int total_C = 0;
        double avg_G = 0;
        for (int i = 0; i < N; i++)
        {
            int C;
            double G;
            scanf("%d %lf", &C, &G);
            total_C += C;
            avg_G += C * G;
        }
        avg_G /= total_C;
        printf("%d %.1lf\n", total_C, avg_G + 1e-9);
    }

    return 0;
}
