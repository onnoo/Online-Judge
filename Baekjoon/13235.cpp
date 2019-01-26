#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    string s, tmp;
    cin >> s;
    tmp = s;
    reverse(s.begin(), s.end());
    if (s == tmp)
        cout << "true";
    else
        cout << "false";

    return 0;
}