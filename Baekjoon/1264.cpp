#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    getline(cin, str);

    while (str != "#")
    {
        int count = 0;
        for (int i = 0; i < str.size(); i++)
        {
            switch (str[i])
            {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
            }
        }
        printf("%d\n", count);
        getline(cin, str);
    }

    return 0;
}