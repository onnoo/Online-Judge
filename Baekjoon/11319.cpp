#include <iostream>
#include <string>

using namespace std;

string vowels = "AEIOUaeiou";

int main(void)
{
    int S;
    cin >> S;
    cin.ignore();

    while (S--)
    {
        int cons = 0, vowel = 0;
        string str;
        getline(cin, str);
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == ' ')
                continue;
            if (vowels.find(str[i]) != string::npos)
                vowel++;
            else
                cons++;
        }
        printf("%d %d\n", cons, vowel);
    }

    return 0;
}