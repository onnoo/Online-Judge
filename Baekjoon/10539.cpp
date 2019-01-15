#include <iostream>

using namespace std;

int main(void)
{
    int N, num, tmp, sum = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> tmp;
        num = tmp * i - sum;
        cout << num << ' ';
        sum += num;
    }
    cout << '\n';
    return 0;
}