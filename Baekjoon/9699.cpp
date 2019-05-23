#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        int arr[5];
        for (int j = 0; j < 5; j++)
            cin >> arr[j];
        sort(arr, arr + 5, greater<int>());
        cout << "Case #" << i << ": " << arr[0] << '\n';
    }
    return 0;
}