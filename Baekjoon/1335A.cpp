#include <iostream>

using namespace std;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        cout << int(N / 2) - !(N % 2) << '\n';
    }

    return 0;
}