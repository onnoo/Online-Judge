#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    long long R, C, N, row, col;
    cin >> R >> C >> N;
    cout << (C % N ? C / N + 1 : C / N) * (R % N ? R / N + 1 : R / N) << '\n';

    return 0;
}