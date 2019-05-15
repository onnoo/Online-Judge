#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdlib.h>

#define MS 999999999
using namespace std;

typedef struct item
{
    bool idx[3];
} item;

int N[3];
vector<int> v[3];
map<int, item> m;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, k, n, msz = -1;

    for (i = 0; i < 3; i++)
        cin >> N[i];

    int prev;
    for (i = 0; i < 3; i++)
    {
        prev = MS;
        for (j = 0; j < N[i]; j++)
        {
            cin >> n;
            if (prev == n)
            {
                N[i]--;
                continue;
            }
            v[i].push_back(n);
            m[n].idx[i] = true;
            prev = n;
        }
        sort(v[i].begin(), v[i].end());
    }

    int tmp[3];
    int ans = MS;
    int idx[3] = {-1, -1, -1};
    for (auto it = m.begin(); it != m.end(); it++)
    {
        for (i = 0; i < 3; i++)
        {
            idx[i] += (*it).second.idx[i];
        }
        for (i = 0; i < 3; i++)
        {
            if ((*it).second.idx[i])
            {
                int a = (i + 1) % 3, b = (i + 2) % 3;
                if (idx[a] < 0 || idx[a] >= N[a] || idx[b] < 0 || idx[b] >= N[b])
                    break;

                for (j = 0; j < 3; j++)
                    tmp[j] = v[j][idx[j]];
                sort(tmp, tmp + 3);
                int dist = abs(tmp[2] - tmp[0]);
                if (dist < ans)
                {
                    ans = dist;
                }
            }
        }
    }

    cout << ans << '\n';

    return 0;
}