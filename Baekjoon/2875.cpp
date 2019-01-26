#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N, M, K;
    cin >> N >> M >> K;
    while (K--)
    {
        if (N / 2 < M)
            M--;
        else
            N--;
    }
    printf("%d\n", min(N / 2, M));
    return 0;
}