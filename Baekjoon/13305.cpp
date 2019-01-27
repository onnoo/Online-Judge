#include <iostream>

using namespace std;

typedef long long ll;

int main(void)
{
    int N;
    ll total = 0;
    scanf("%d", &N);
    ll *D = (ll *)malloc(sizeof(ll) * (N - 1));
    ll *L = (ll *)malloc(sizeof(ll) * N);
    for (int i = 0; i < N - 1; i++)
        scanf("%lld", D + i);
    for (int i = 0; i < N; i++)
        scanf("%lld", L + i);

    for (int i = 0; i < N - 1;)
    {
        ll cost = D[i] * L[i];
        int go = 1;
        for (int j = i + 1; j < N - 1; j++)
        {
            if (L[i] < L[j])
            {
                cost += D[j] * L[i];
                go++;
            }
            else
                break;
        }
        i += go;
        total += cost;
    }

    printf("%lld\n", total);

    return 0;
}