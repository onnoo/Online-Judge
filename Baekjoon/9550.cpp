#include <iostream>

using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K, count = 0;
        cin >> N >> K;
        while (N--)
        {
            int tmp;
            cin >> tmp;
            count += tmp / K;
        }
        cout << count << '\n';
    }

    return 0;
}