#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, sum = 0, tmp;
    cin >> N;

    for (int i = 0; i < 2 * N; i++)
    {
        cin >> tmp;
        sum += abs(tmp);
    }

    cout << sum << '\n';

    return 0;
}