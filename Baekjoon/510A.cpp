#include <iostream>

using namespace std;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i % 2 == 0)
            {
                cout << '#';
            }
            else if (i % 4 < 2 && j == M - 1 || i % 4 >= 2 && j == 0) {
                cout << '#';
            }
            else
            {
                cout << '.';
            }
        }
        cout << '\n';
    }

    return 0;
}