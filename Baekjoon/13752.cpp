#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n, k;
    cin >> n;

    while (n--)
    {
        cin >> k;
        while (k--)
            cout << '=';
        cout << '\n';
    }

    return 0;
}