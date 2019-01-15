#include <iostream>

using namespace std;

int main(void)
{
    int T, N, sz;
    cin >> T;
    while (T--)
    {
        cin >> N;
        sz = (N + 1) / 2;
        cout << sz * sz << '\n';
    }

    return 0;
}