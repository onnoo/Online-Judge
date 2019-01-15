#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
    vector<pair<int, string>> v, tmp;
    int n;
    cin >> n;

    while (n--)
    {
        v.push_back(make_pair(0, "Coyote"));
        v.push_back(make_pair(0, "Bobcat"));
        v.push_back(make_pair(0, "Wolf"));
        v.push_back(make_pair(0, "Mountain Lion"));
        string x, s;
        cin >> x >> s;

        for (int i = 0; i < s.size(); i++)
            for (int j = 0; j < 4; j++)
                if (s[i] == v[j].second[0])
                    v[j].first += j + 1;

        sort(v.begin(), v.end());
        if (v[3].first == v[2].first)
            cout << x << ": There is no dominant species\n";
        else
            cout << x << ": The " << v[3].second << " is the dominant species\n";
        v.clear();
    }

    return 0;
}