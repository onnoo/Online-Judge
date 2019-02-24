#include <iostream>

using namespace std;

int main(void)
{
    int L;
    cin >> L;
    cout << L / 5 + (L % 5 ? 1 : 0) << '\n';

    return 0;
}