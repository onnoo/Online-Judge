#include <iostream>

using namespace std;

int main(void)
{
    int N, K, S, Y, tmp, room = 0;
    cin >> N >> K;

    int arr[] = {0, 0, 0, 0, 0};
    for (int i = 0; i < N; i++)
    {
        cin >> S >> Y;
        tmp = (Y + 1) / 2;
        if (tmp == 1)
            arr[0]++;
        else if (tmp == 2)
            arr[1 + S]++;
        else
            arr[3 + S]++;
    }
    for (int i = 0; i < 5; i++)
        if (arr[i] != 0)
            room += arr[i] / K + (arr[i] % K != 0);

    cout << room << '\n';

    return 0;
}