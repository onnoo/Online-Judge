#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int add = 0;
    int tmp = 1;
    for (int i = 0; i < N; i++)
    {
        add += tmp;
        tmp *= 2;
    }

    cout << (2 + add) * (2 + add) << '\n';

    return 0;
}