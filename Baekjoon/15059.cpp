#include <iostream>

using namespace std;

int arr[6], i, sum, tmp;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for (i = 0; i < 6; i++)
        cin >> arr[i];

    for (i = 0; i < 3; i++)
        if ((tmp = arr[i + 3] - arr[i]) > 0)
            sum += tmp;

    cout << sum << '\n';

    return 0;
}