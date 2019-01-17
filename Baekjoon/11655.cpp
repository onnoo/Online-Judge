#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'n')
            printf("%c", s[i] - 13);
        else if (s[i] >= 'a')
            printf("%c", 'n' + s[i] - 97);
        else if (s[i] >= 'N')
            printf("%c", s[i] - 13);
        else if (s[i] >= 'A')
            printf("%c", 'N' + s[i] - 65);
        else
            printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}