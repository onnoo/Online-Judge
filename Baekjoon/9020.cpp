#include <iostream>

using namespace std;

#define MAXNUM 100002

int arr[MAXNUM];
int T, N;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    for (int i = 2; i * i <= MAXNUM; i++)
    {
        if (!arr[i])
        {
            for (int j = i + i; j < MAXNUM; j += i)
            {
                arr[j] = true;
            }
        }
    }

    while (T--)
    {

        cin >> N;
        for (int i = N / 2; i >= 2; i--)
        {
            if (!(arr[i] || arr[N - i]))
            {
                cout << i << ' ' << N - i << '\n';
                break;
            }
        }
    }

    return 0;
}