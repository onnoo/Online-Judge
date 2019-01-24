#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    int T;
    string str;
    char *cp;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        getline(cin, str);
        cp = strtok(&str[0], " ");
        cout << "god";
        cp = strtok(NULL, " ");
        while (cp != NULL)
        {
            cout << cp;
            cp = strtok(NULL, " ");
        }
        cout << '\n';
    }

    return 0;
}