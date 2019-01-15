#include <iostream>

using namespace std;

int main(void)
{
    int arr[] = {500, 100, 50, 10, 5, 1};
    int N, count = 0;
    cin >> N;
    N = 1000 - N;
    for (int i = 0; i < 6; i++)
    {
        count += N / arr[i];
        N %= arr[i];
    }
    cout << count << '\n';

    return 0;
}