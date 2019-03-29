#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, A, B;
    cin >> N;
    vector<set<int>> v(N + 1);
    queue<int> q;
    for (int i = 1; i < N; i++)
    {
        cin >> A >> B;
        if (A == B)
            continue;
        v[A].insert(B);
        v[B].insert(A);
    }

    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    bool ans = true;
    q.push(1);
    int idx = 1;
    while (!q.empty() && ans)
    {
        int t = q.front();
        q.pop();

        for (int i = 0; i < v[t].size(); i++)
        {
            if (v[t].find(arr[idx]) != v[t].end())
            {
                q.push(arr[idx]);
                v[arr[idx]].erase(t);
                idx++;
            }
            else
            {
                ans = false;
                break;
            }
        }
    }

    cout << ans << '\n';
    return 0;
}