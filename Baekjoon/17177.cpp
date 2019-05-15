#include <iostream>

using namespace std;

int N[4];

bool check(int);
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N[0] >> N[1] >> N[2];

    for (N[3] = 1; N[3] <= 100; N[3]++)
    {
        for (int i = 1; i <= 3; i++)
        {
            if (check(i))
            {
                cout << N[3] << '\n';
                return 0;
            }
        }
    }
    cout << -1 << '\n';
    return 0;
}

bool check(int j)
{
    int i = j - 1;
    int D = N[(i % 3) + 1];
    int A = N[0], B = N[(i + 1) % 3 + 1], C = N[(i + 2) % 3 + 1];

    // 좌항
    int left = A * D + B * C;
    left *= left;

    // 우항
    int right = (A + B) * (A - B) * (A + C) * (A - C);

    return left == right;
}