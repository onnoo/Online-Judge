#include <iostream>

using namespace std;

#define N 9000000

bool arr[N];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int K;
    cin >> K;
    int cnt = 0;
    for (int i = 2; i < N; i++)
    {
        if (!arr[i])
        {
            cnt++;
            if (cnt == K)
            {
                cout << i << '\n';
                break;
            }
            for (int j = i; j < N; j += i)
                arr[j] = true;
        }
    }

    return 0;
}