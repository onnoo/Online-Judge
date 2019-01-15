#include <iostream>

using namespace std;

int main(void)
{
    int N, K, tmp, capacity = 0;
    cin >> N >> K;

    for (int i = 0; i < K; i++)
    {
        cin >> tmp;
        if (tmp % 2)
            capacity += (tmp + 1) / 2;
        else
            capacity += tmp / 2;
    }

    if (capacity >= N)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}