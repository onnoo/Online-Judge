#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
        cout << '1';

    for (int i = 0; i < N - 1; i++)
        cout << '0';

    cout << '\n';

    return 0;
}