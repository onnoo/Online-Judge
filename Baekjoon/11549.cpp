#include <iostream>

using namespace std;

int main(void)
{
    int T, tmp, count = 0;
    cin >> T;

    for (int i = 0; i < 5; i++)
    {
        cin >> tmp;
        if (tmp == T)
            count++;
    }

    cout << count << '\n';

    return 0;
}