#include <iostream>

using namespace std;

int main(void)
{
    int result = 0, num;
    char c = '\0';
    while (c != '=')
    {
        cin >> num;
        if (c == '+')
            result += num;
        else if (c == '-')
            result -= num;
        else if (c == '*')
            result *= num;
        else if (c == '/')
            result /= num;
        else
            result = num;
        cin >> c;
    }
    cout << result << '\n';
    return 0;
}