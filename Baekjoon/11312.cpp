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

        long long l = A / B;
        cout << l * l << '\n';
    }

    return 0;
}