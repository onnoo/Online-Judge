#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;
    getline(cin, s);
    while (s != "END")
    {
        for (int i = s.size() - 1; i >= 0; i--)
            printf("%c", s[i]);
        printf("\n");
        getline(cin, s);
    }

    return 0;
}