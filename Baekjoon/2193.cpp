#include <iostream>

using namespace std;

typedef long long ll;

ll *arr;

ll pinary(int num)
{
    if (arr[num] != 0)
        return arr[num];

    if (num == 1)
        return arr[num] = 1;
    else if (num == 2)
        return arr[num] = 1;
    else
    {
        ll ret = 1;
        for (int i = 2; i < num; i++)
        {
            ret += pinary(num - i);
        }
        return arr[num] = ret;
    }
}

int main(void)
{
    int N;

    cin >> N;
    arr = (ll *)calloc(N + 1, sizeof(ll));
    cout << pinary(N) << '\n';

    return 0;
}