#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    string s;
    int T, sum, tmp;
    cin >> T;
    while (T--)
    {
        sum = 0;
        cin >> s;
        for (int i = 0; i < 16; i++)
        {
            if (i % 2) // 홀수이다.
                sum += s[i] - 48;
            else
                sum += ((tmp = (s[i] - 48) * 2) < 10 ? tmp : 1 + tmp % 10);
        }
        if (sum % 10) // 10으로 나누어 떨어지지 않는다.
            printf("F\n");
        else
            printf("T\n");
    }

    return 0;
}