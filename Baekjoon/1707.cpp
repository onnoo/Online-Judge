#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int K;
    cin >> K;
    while(K--)
    {
        int V, E, v1, v2, i, j;
        queue<int> q;
        cin >> V >> E;
        vector<vector<int>> v(V + 1);
        vector<int> chk(V + 1);

        for (i = 0; i < E; i++)
        {
            cin >> v1 >> v2;
            v[v1].push_back(v2);
            v[v2].push_back(v1);
        }

        bool ans = true;
        for (i = 1; i <= V; i++)
        {
            if (chk[i] != 0)
                continue;
            q.push(i);
            int mark = 1;
            
            while (!q.empty())
            {
                int cnt;
                cnt = q.size();
                for (int t = 0; t < cnt; t++)
                {
                    j = q.front();
                    q.pop();
                    chk[j] = mark + 1;
                    for (int k : v[j])
                    {
                        if (chk[k] == 0)
                        {
                            chk[k] = mark;
                            q.push(k);
                        }
                        else if (chk[k] == chk[j])
                        {
                            ans = false;
                            break;
                        }
                    }
                }
                mark = mark % 2 + 1;

                if (!ans)
                    break;
            }

            if (!ans)
                break;
        }
        if (ans)
                cout << "YES\n";
            else
                cout << "NO\n";
    }
    return 0;
}