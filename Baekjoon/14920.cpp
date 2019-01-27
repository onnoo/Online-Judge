#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    int N, cnt = 1;
    cin >> N;
    while (N != 1)
    {
        cnt++;
        if (N % 2)
            N = 3 * N + 1;
        else
            N /= 2;
    }
    cout << cnt << '\n';

    return 0;
}