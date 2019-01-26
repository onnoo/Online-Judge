#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    bool odd;
    int sum = 0, tmp;
    for (int i = 0; i < 13; i++)
    {
        if (s[i] == '*')
            odd = i % 2;
        else
            sum += (s[i] - 48) * (i % 2 ? 3 : 1);
    }
    for (int i = 0; i < 10; i++)
    {
        if ((sum + i * (odd ? 3 : 1)) % 10 == 0)
        {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}