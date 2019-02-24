#include <iostream>
#include <string>

using namespace std;

bool arr[10000000];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, tmp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        if (!arr[tmp])
            arr[tmp] = true;
        else
            cout << tmp << '\n';
    }

    return 0;
}