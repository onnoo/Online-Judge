#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    string str;
    cin >> str;

    vector<char> v;
    for (int i = 0; i < str.size(); i++)
        v.push_back(str[i]);

    sort(v.begin(), v.end(), greater<char>());

    for (int i = 0; i < v.size(); i++)
        printf("%c", v[i]);
    printf("\n");

    return 0;
}