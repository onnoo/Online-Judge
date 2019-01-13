#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    char c;
    scanf("%c", &c);

    while (c != '#')
    {
        string s;
        getline(cin, s);
        int count = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == c || s[i] == c - 32)
                count++;
        printf("%c %d\n", c, count);
        scanf("%c", &c);
    }

    return 0;
}