#include <iostream>

using namespace std;

int main(void)
{
    bool SK = true;
    int N;
    cin >> N;

    bool *arr = (bool *)calloc(N + 1, sizeof(bool));
    arr[1] = true;
    arr[3] = true;
    arr[4] = true;
    for (int i = 5; i <= N; i++)
    {
        if (!arr[i - 4] || !arr[i - 3] || !arr[i - 1])
        {
            arr[i] = true;
        }
    }

    if (arr[N])
        cout << "SK" << '\n';
    else
        cout << "CY" << '\n';

    return 0;
}