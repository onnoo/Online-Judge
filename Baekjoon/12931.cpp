#include <iostream>

using namespace std;

int main(void)
{
    int N, answer = 0;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int mod;
    bool flag, d;
    while (true)
    {
        flag = true;
        d = false;
        for (int i = 0; i < N; i++)
        {
            if (arr[i])
                flag = false;
            if (arr[i] == 1)
            {
                answer++;
                arr[i] = 0;
            }
            else if (arr[i] > 1)
            {
                answer += arr[i] % 2;
                arr[i] = (arr[i] - arr[i] % 2) / 2;
                d = true;
            }
        }
        if (flag)
            break;
        if (d)
            answer++;
    }

    cout << answer << '\n';




    return 0;
}