#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> v, tmp;
    string s;
    cin >> s;
    char *cp = strtok(&s[0], ",");
    while (cp != NULL)
    {
        v.push_back(stoi(cp));
        cp = strtok(NULL, ",");
    }

    for (int i = 0; i < K; i++)
    {
        int sz = v.size();
        for (int j = 1; j < sz; j++)
        {
            tmp.push_back(v[j] - v[j - 1]);
        }
        v.clear();
        v = tmp;
        tmp.clear();
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i != v.size() - 1)
            cout << ',';
    }
    cout << '\n';

    return 0;
}