#include <iostream>

using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int M;
        char c;
        cin >> M >> c;
        if (c == 'C')
        {
            for (int i = 0; i < M; i++)
            {
                char tmp;
                cin >> tmp;
                cout << tmp - 64 << ' ';
            }
            cout << '\n';
        }
        else
        {
            for (int i = 0; i < M; i++)
            {
                int tmp;
                cin >> tmp;
                cout << (char)(64 + tmp) << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}