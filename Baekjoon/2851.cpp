#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    int distance = 100, score = 0, result;
    for (int i = 0; i < 10; i++)
    {
        score += arr[i];
        if (abs(100 - score) <= distance)
        {
            result = score;
            distance = abs(100 - score);
        }
    }

    cout << result << '\n';
    return 0;
}