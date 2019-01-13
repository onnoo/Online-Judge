#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int comp(string s1, string s2)
{
    if (s1.size() == s2.size())
        return s1 < s2;
    else
        return s1.size() < s2.size();
}

int main(void)
{
    int N;
    scanf("%d", &N);

    vector<string> v;
    vector<string>::iterator iter;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        if ((iter = find(v.begin(), v.end(), s)) == v.end())
            v.push_back(s);
    }

    sort(v.begin(), v.end(), comp);

    for (string s : v)
    {
        cout << s << '\n';
    }

    return 0;
}