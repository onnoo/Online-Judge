#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin >> N;

    cout << N << ' ';
    while (N != 1)
    {
        if (N % 2 == 0)
            N /= 2;
        else
        {
            N *= 3;
            N++;
        }
        cout << N << ' ';
    }

    return 0;
}