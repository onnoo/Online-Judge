#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    bool res = true;
    while (N != 1)
    {
        if (N % 2)
        {
            res = false;
            break;
        }
        N /= 2;
    }
    cout << res << '\n';

    return 0;
}