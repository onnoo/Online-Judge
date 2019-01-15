#include <iostream>

using namespace std;

int main(void)
{
    char ans[] = {'a', 'b', 'b', 'c', 'd', 'd', 'd', 'c'};
    int n;
    cin >> n;
    cout << ans[n - 1] << '\n';

    return 0;
}