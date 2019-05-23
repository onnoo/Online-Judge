#include <iostream>

using namespace std;

void print_star(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    while (N != 0)
    {
        print_star(N);
        cin >> N;
    }

    return 0;
}