#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, K;
    cin >> N >> M;

    vector<vector<string>> v(N);
    string s;
    for (int i = 0; i < N; i++)
    {

        cin >> s >> K;
        v[i].push_back(s);
        while (K--)
        {
            cin >> s;
            v[i].push_back(s);
        }
        auto it = v[i].begin();
        sort(++v[i].begin(), v[i].end());
    }
    while (M--)
    {
        cin >> s >> K;
        if (K)
        {
            for (int i = 0; i < N; i++)
            {
                auto it = v[i].begin();
                if (find(++it, v[i].end(), s) != v[i].end())
                {
                    cout << v[i][0] << '\n';
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < N; i++)
            {
                if (v[i][0] == s)
                {
                    for (int j = 1; j < v[i].size(); j++)
                        cout << v[i][j] << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}