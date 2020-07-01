#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int T;
    string s;
    cin >> T;
    while(T--)
    {
        cin >> s;
        if (s.size() > 10)
        {
            cout << *s.begin() << s.size() - 2 << *(s.end() - 1) << '\n';
        }
        else
        {
            cout << s << '\n';
        }
    }
    return 0;
}