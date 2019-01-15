#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 'a' - 'A';
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}