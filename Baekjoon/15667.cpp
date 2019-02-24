#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, i;
    cin >> N;

    for (i = 1; 1 + i + i * i <= N; i++)
    {
        ;
    }
    cout << i - 1 << '\n';

    return 0;
}