#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int N, begin = 1, end, a;
    cin >> N;
    for (int i = 1; i < N; i++)
        begin *= 10;
    end = begin * 8;
    a = (N == 1 ? 1 : 2);

    bool chk;
    for (int i = begin * 2 + (N != 1); i < end; i += a)
    {
        chk = true;
        for (int j = begin; j != 0 && chk; j /= 10)
            chk = is_prime(i / j);
        if (chk)
            cout << i << '\n';
    }

    return 0;
}