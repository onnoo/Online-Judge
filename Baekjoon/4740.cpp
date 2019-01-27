#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    string s;
    getline(cin, s);
    while (s != "***")
    {
        reverse(s.begin(), s.end());
        printf("%s\n", s.c_str());
        getline(cin, s);
    }

    return 0;
}