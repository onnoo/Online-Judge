#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const string base64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                      "abcdefghijklmnopqrstuvwxyz"
                      "0123456789+/";

int main(void)
{
    int tmp, mul;
    string S, buffer = "", result = "", extra = "", num;
    cin >> S;
    for (int i = 0; S[i]; i++)
    {
        tmp = S[i];
        while (tmp > 0)
        {
            buffer = (char)(tmp % 2 + 48) + buffer;
            tmp /= 2;
        }
        while (buffer.size() != 8)
            buffer = '0' + buffer;
        buffer = extra + buffer;

        while (buffer.size() >= 6)
        {
            num = buffer.substr(0, 6);
            buffer = buffer.substr(6, buffer.size() - 6);
            tmp = 0;
            mul = 1;
            for (int i = 5; i >= 0; i--)
            {
                tmp += (num[i] == '1') * mul;
                mul *= 2;
            }
            result += base64[tmp];
        }
        extra = buffer;
        buffer = "";
    }
    if (extra.size())
    {

        while (extra.size() != 6)
        {
            extra += '0';
        }
        tmp = 0;
        mul = 1;
        for (int i = 5; i >= 0; i--)
        {
            tmp += (extra[i] == '1') * mul;
            mul *= 2;
        }
        result += base64[tmp];
        result += '=';
        if (S.size() % 3 == 1)
            result += '=';
    }

    cout << result << '\n';

    return 0;
}