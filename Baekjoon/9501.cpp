#include <iostream>

using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, D, v, f, c, count = 0;
        cin >> N >> D;
        for (int i = 0; i < N; i++)
        {
            cin >> v >> f >> c;
            double vpc = (double)v / c;
            if (vpc * f >= D)
                count++;
        }
        cout << count << '\n';
    }

    return 0;
}