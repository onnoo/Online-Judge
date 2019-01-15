#include <iostream>

using namespace std;

int main(void)
{
    int T, d, s;
    cin >> T;
    while (T--)
    {
        cin >> d;
        s = 0;
        while (s + s * s <= d)
            s++;
        cout << s - 1 << '\n';
    }
    return 0;
}