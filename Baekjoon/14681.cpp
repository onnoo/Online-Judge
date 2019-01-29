#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int X, Y;
    cin >> X >> Y;
    if (X > 0 && Y > 0)
        cout << 1;
    else if (X < 0 && Y > 0)
        cout << 2;
    else if (X < 0 && Y < 0)
        cout << 3;
    else
        cout << 4;
    return 0;
}