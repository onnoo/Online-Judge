#include <iostream>

using namespace std;

int main(void)
{
    int N, sum = 0;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum == 0 || N == 0)
        cout << "divide by zero\n";
    else
        printf("%0.2f\n", 1.00);

    return 0;
}