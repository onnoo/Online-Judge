#include <iostream>

using namespace std;

void print_bin(int n)
{
    string bin = "";
    if (n == 0)
        printf("0\n");
    else
    {
        while (n > 0)
        {
            bin = to_string(n % 2) + bin;
            n /= 2;
        }
        cout << bin << '\n';
    }
}

int main(void)
{
    char c;
    string str = "";
    while ((scanf("%c", &c)) != EOF)
    {
        switch (c)
        {
        case '0':
            str += "000";
            break;
        case '1':
            str += "001";
            break;
        case '2':
            str += "010";
            break;
        case '3':
            str += "011";
            break;
        case '4':
            str += "100";
            break;
        case '5':
            str += "101";
            break;
        case '6':
            str += "110";
            break;
        case '7':
            str += "111";
            break;
        }
    }
    while (str.size() > 1 && str[0] == '0')
        str = str.substr(1, str.size() - 1);

    cout << str << '\n';
    return 0;
}