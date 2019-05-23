#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K, X, O;
    int floor;
    string result;
    cin >> N >> K;

    // Trace safe & broken
    O = 1;
    X = K;

    while (N--)
    {
        cin >> floor >> result;

        if (result[0] == 'S')
        {
            if (floor > O)
                O = floor;
        }
        else
        {
            if (floor < X)
                X = floor;
        }
    }

    cout << O + 1 << " " << X - 1 << '\n';

    return 0;
}