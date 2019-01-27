#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else if (a > b)
        return gcd(b, a % b);
    else
        return gcd(a, b % a);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    int num = arr[0];
    for (int i = 1; i < N; i++)
        num = gcd(num, arr[i]);

    for (int i = 1; i <= num; i++)
        if (!(num % i))
            cout << i << '\n';

    return 0;
}