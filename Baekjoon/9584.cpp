#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    vector<string> v;
    bool check;
    int n, count = 0;
    string str, s;
    cin >> str >> n;

    while (n--)
    {
        check = true;
        cin >> s;
        for (int i = 0; i < 9; i++)
            if (str[i] != '*' && str[i] != s[i])
                check = false;
        if (check)
        {
            v.push_back(s);
            count++;
        }
    }

    cout << count << '\n';
    for (string tmp : v)
        cout << tmp << '\n';

    return 0;
}