#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, L, next = 0;
    cin >> N >> L;

    int *arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);

    while (L >= arr[next] && next < N)
    {
        L++;
        next++;
    }

    cout << L << '\n';

    return 0;
}