#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int A, B;
    cin >> A >> B;
    while (!(A == 0 && B == 0))
    {
        int arr[3] = {0, 0, 0};
        arr[0] = A * 2 - B;
        arr[1] = B * 2 - A;
        arr[2] = (A + B) / 2;
        sort(arr, arr + 3);
        cout << arr[0] << '\n';
        cin >> A >> B;
    }

    return 0;
}