#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s, key;
    getline(cin, s);
    cin >> key;

    for (int i = 0; i < s.size(); i++)
    {
        int term = key[i % key.size()] - 96;
        if (s[i] != ' ')
        {
            char c = s[i] - term;
            if (c < 97)
                c += 26;
            printf("%c", c);
        }
        else
            printf(" ");
    }
    printf("\n");

    return 0;
}