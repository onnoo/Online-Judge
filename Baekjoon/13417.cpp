#include <iostream>

using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;

        string str;

        cin >> str;

        for (int j = 0; j < N - 1; j++)
        {
            char c;
            cin >> c;
            if (str[0] >= c)
                str = c + str;
            else
                str = str + c;
        }

        cout << str << endl;
    }

    return 0;
}