#include <iostream>

using namespace std;

int main(void)
{
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    cout << (arr[0] >= 8 && arr[3] >= 8 && arr[1] == arr[2] ? "ignore" : "answer");

    return 0;
}