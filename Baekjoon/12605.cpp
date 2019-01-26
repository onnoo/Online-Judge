#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    cin.ignore();
    vector<string> v;
    for (int i = 1; i <= N; i++)
    {
        string s;
        getline(cin, s);
        char *cp = strtok(&s[0], " ");
        while (cp != NULL)
        {
            v.push_back(string(cp));
            cp = strtok(NULL, " ");
        }
        v.pop_back();
        cout << "Case #" << i << ": ";
        for (int i = v.size(); i >= 0; i--)
        {
            cout << v[i] << ' ';
        }
        cout << '\n';
        v.clear();
    }

    return 0;
}