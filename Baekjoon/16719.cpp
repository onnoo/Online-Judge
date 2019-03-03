#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    bool *include = (bool *)calloc(s.size(), sizeof(bool));
    vector<string> v;
    for (int i = 0; i < s.size(); i++)
    {
        string t = "";
        int idx;
        for (int j = 0; j < s.size(); j++)
        {
            if (!include[j])
            {
                string tmp = "";
                include[j] = true;
                for (int k = 0; k < s.size(); k++)
                {
                    if (include[k])
                        tmp += s[k];
                }
                include[j] = false;
                if (t == "" || tmp < t)
                {
                    t = tmp;
                    idx = j;
                }
            }
        }
        include[idx] = true;
        cout << t << '\n';
    }

    return 0;
}