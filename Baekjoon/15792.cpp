#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int A, B;
    cin >> A >> B;
    cout << A / B << '.';
    A = A % B;
    for (int i = 0; i < 1002; i++)
    {
        A *= 10;
        cout << A / B;
        A = A % B;
    }
    cout << '\n';

    return 0;
}