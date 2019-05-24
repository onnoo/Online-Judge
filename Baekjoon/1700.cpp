#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<queue<int>> v(101);
bool tab[101];

bool comp(int a, int b)
{
    if (v[a].empty())
        return false;
    else if (v[b].empty())
        return true;
    else
        return v[a] < v[b];
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K, num, cnt = 0;
    cin >> N >> K;

    queue<int> q;
    vector<int> pq;

    for (int i = 0; i < K; i++)
    {
        cin >> num;
        q.push(num);
        v[num].push(i); // 다음 등장을 나타내는 큐벡터
    }

    int j;
    while (!q.empty())
    {
        j = q.front();
        v[j].pop();

        if (!tab[j])
        {
            tab[j] = true;

            if (pq.size() == N)
            {
                tab[pq.back()] = false;
                pq.pop_back();
                cnt++;
            }

            pq.push_back(j);
        }
        sort(pq.begin(), pq.end(), comp);

        q.pop();
    }

    cout << cnt << '\n';

    return 0;
}