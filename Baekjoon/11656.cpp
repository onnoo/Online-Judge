#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    vector<string> v;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        v.push_back(s.substr(i, s.size()));
    }

    sort(v.begin(), v.end());

    for (string str : v)
        cout << str << '\n';

    return 0;
}