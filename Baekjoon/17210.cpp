#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    bool M;
    cin >> N >> M;
    if (N >= 6)
        cout << "Love is open door\n";
    else
    {
        for (int i = 1; i < N; i++)
        {
            M = !M;
            cout << M << '\n';
        }
    }

    return 0;
}