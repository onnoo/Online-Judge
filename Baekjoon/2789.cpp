#include <iostream>
#include <string>

using namespace std;

string word = "CAMBRIDGE";

int main(void)
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
        if (word.find(s[i]) == string::npos)
            printf("%c", s[i]);
    printf("\n");

    return 0;
}