#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int t, i, j;
    char c;
    string s;
    cin >> s;
    for (t = 0; t < 5; t++)
    {
        for (i = 0; i < s.size(); i++)
        {
            for (j = 0; j < 4; j++)
            {
                c = i % 3 == 2 ? '*' : '#';
                if (t == 0 || t == 4)
                    c = j == 2 ? c : '.';
                else if (t == 1 || t == 3)
                    c = j % 2 ? c : '.';
                else
                {
                    if (j % 2 == 1)
                        c = '.';
                    else if (j == 2)
                        c = s[i];
                    else if (i == 0 || i % 3 == 1)
                        c = '#';
                    else
                        c = '*';
                }
                printf("%c", c);
            }
        }
        printf("%c\n", t == 2 ? ((i - 1) % 3 == 2 ? '*' : '#') : '.');
    }

    return 0;
}