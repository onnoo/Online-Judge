#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int sum, mul;
    string s, tmp, result = "";
    cin >> s;
    int start = s.size() % 3;
    if (start != 0)
    {
        sum = 0;
        tmp = s.substr(0, start);
        mul = 1;
        for (int i = start - 1; i >= 0; i--)
        {
            sum += (tmp[i] - 48) * mul;
            mul *= 2;
        }
        printf("%d", sum);
    }
    for (int i = s.size() % 3; i < s.size(); i += 3)
    {
        sum = 0;
        tmp = s.substr(i, 3);
        mul = 4;
        for (int i = 0; i < 3; i++)
        {
            sum += (tmp[i] - 48) * mul;
            mul /= 2;
        }
        printf("%d", sum);
    }
    printf("\n");
    return 0;
}