#include <iostream>

using namespace std;

int main(void)
{
    int e, f, c, tmp, result = 0;
    cin >> e >> f >> c;
    e += f;
    f = 0;
    while (e >= c)
    {
        result += tmp = e / c;
        e %= c;
        e += tmp;
    }

    cout << result << '\n';

    return 0;
}