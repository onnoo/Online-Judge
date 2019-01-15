#include <iostream>

using namespace std;

int main(void)
{
    int T;
    cin >> T;

    while (T--)
    {
        int A, B;
        cin >> A >> B;
        int n = A / B;
        cout << n * n << '\n';
    }

    return 0;
}