#include <iostream>

using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, tmp;
        cin >> N >> M;
        tmp = 2 * M - N;
        cout << tmp << ' ' << M - tmp << '\n';
    }

    return 0;
}