#include <iostream>

using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        double D, A, B, F;
        cin >> N >> D >> A >> B >> F;
        printf("%d %.2lf\n", N, D / (A + B) * F + 1e-9);
    }

    return 0;
}