#include <iostream>

using namespace std;

int main(void)
{
    int R, B;
    cin >> R >> B;

    for (int i = 1; i <= R; i++)
    {
        if (B % i)
            continue;
        if (i * 2 + B / i * 2 + 4 == R)
        {
            cout << B / i + 2 << ' ' << i + 2 << '\n';
            break;
        }
    }
    return 0;
}

//L이 되고 작은 수가 W이 된다.