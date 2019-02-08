#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;
    cin >> s;

    bool ans = true;
    unsigned long idx = 0, tmp;
    while (idx < s.size())
    {
        if ((tmp = s.find("pi", idx)) == idx)
            idx = tmp + 2;
        else if ((tmp = s.find("ka", idx)) == idx)
            idx = tmp + 2;
        else if ((tmp = s.find("chu", idx)) == idx)
            idx = tmp + 3;
        else
        {
            ans = false;
            break;
        }
    }
    cout << (ans ? "YES" : "NO") << '\n';
    return 0;
}