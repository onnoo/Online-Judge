#include <iostream>

using namespace std;

int arr[12] = {0};

int sum123(int n)
{
    if (arr[n] != 0)
        return arr[n];

    if (n == 1)
        return arr[n] = 1;
    else if (n == 2)
        return arr[n] = 2;
    else if (n == 3)
        return arr[n] = 4;
    else
        return arr[n] = sum123(n - 1) + sum123(n - 2) + sum123(n - 3);
}

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << sum123(n) << '\n';
    }

    return 0;
}