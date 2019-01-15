#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 && j == 1)
                cout << ":" << s << ":";
            else
                cout << ":fan:";
        }
        cout << '\n';
    }

    return 0;
}