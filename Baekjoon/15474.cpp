#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;

    int X = 0, Y = 0;
    int cost_X = 0, cost_Y = 0;

    while (X < N)
    {
        cost_X += B;
        X += A;
    }

    while (Y < N)
    {
        cost_Y += D;
        Y += C;
    }

    cout << min(cost_X, cost_Y) << '\n';

    return 0;
}