#include <iostream>

using namespace std;

int cnt = 0;
int N;

void hanoi(int from, int to, int tmp, int size, bool print)
{
    if (size == 1)
    {
        if (print)
            cout << from << ' ' << to << '\n';
        cnt++;
    }
    else
    {
        hanoi(from, tmp, to, size - 1, print);
        if (print)
            cout << from << ' ' << to << '\n';
        cnt++;
        hanoi(tmp, to, from, size - 1, print);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    hanoi(1, 3, 2, N, false);
    cout << cnt << '\n';
    hanoi(1, 3, 2, N, true);

    return 0;
}