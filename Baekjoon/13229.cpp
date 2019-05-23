#include <iostream>
#include <vector>

using namespace std;

int arr[100000];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, i, j, sum;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cin >> M;
    while (M--)
    {
        sum = 0;
        cin >> i >> j;
        for (; i <= j; i++)
        {
            sum += arr[i];
        }
        cout << sum << '\n';
    }

    return 0;
}