#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;
    getline(cin, s);
    while (s != "*")
    {
        bool result = true;
        for (int i = 0; i < 26; i++)
        {
            if (s.find((char)(97 + i)) == string::npos)
            {
                result = false;
                break;
            }
        }
        if (result)
            cout << "Y\n";
        else
            cout << "N\n";
        getline(cin, s);
    }
    return 0;
}