#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    long long N, two = 0, five = 0, tmp;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        tmp = i;
        while (tmp % 2 == 0)
        {
            two++;
            tmp /= 2;
        }
        while (tmp % 5 == 0)
        {
            five++;
            tmp /= 5;
        }
    }
    if (two > five)
        cout << five << '\n';
    else
        cout << two << '\n';

    return 0;
}