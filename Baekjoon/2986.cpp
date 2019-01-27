#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N, K = 1;
    cin >> N;

    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            K = N / i;
            break;
        }
    }
    cout << N - K << '\n';

    return 0;
}