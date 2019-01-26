#include <iostream>
#include <string>
#include <vector>

using namespace std;

string convert(string s)
{
    for (int i = 0; i < s.size(); i++)
        s[i] = (s[i] == 'z' ? 'a' : s[i] + 1);
    return s;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    string code, tmp;
    cin >> code;
    int N;
    cin >> N;
    cin.ignore();
    vector<string> v;
    for (int i = 0; i < N; i++)
    {
        getline(cin, tmp);
        v.push_back(tmp);
    }
    bool go = true;
    tmp = code;
    while (go)
    {
        tmp = convert(tmp);
        for (int i = 0; i < N; i++)
            if (tmp.find(v[i]) != string::npos)
                go = false;
    }
    cout << tmp << '\n';
    return 0;
}