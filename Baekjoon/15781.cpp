#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;
    int h = 0;
    while (N--)
    {
        int tmp;
        cin >> tmp;
        if (tmp > h)
            h = tmp;
    }
    int j = 0;
    while (M--)
    {
        int tmp;
        cin >> tmp;
        if (tmp > j)
            j = tmp;
    }
    cout << h + j << '\n';
}