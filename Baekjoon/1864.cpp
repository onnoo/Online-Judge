#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int num(char c)
{
    switch (c)
    {
    case '-':
        return 0;
    case '\\':
        return 1;
    case '(':
        return 2;
    case '@':
        return 3;
    case '?':
        return 4;
    case '>':
        return 5;
    case '&':
        return 6;
    case '%':
        return 7;
    default:
        return -1;
    }
}

int main(void)
{
    string s;
    cin >> s;

    while (s != "#")
    {
        int result = 0;
        for (int i = 0; i < s.size(); i++)
        {
            result += num(s[s.size() - i - 1]) * pow(8, i);
        }
        printf("%d\n", result);
        cin >> s;
    }

    return 0;
}