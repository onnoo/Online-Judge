#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct vertex
{
    int number;
    int indegree;
    vector<int> outedge;
} vertex;

bool operator<(vertex a, vertex b)
{
    return a.indegree > b.indegree;
};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, A, B;
    cin >> N >> M;

    vector<vertex> v(N + 1);
    for (int i = 1; i <= N; i++)
        v[i].number = i;

    while (M--)
    {
        cin >> A >> B;
        v[A].outedge.push_back(B);
        v[B].indegree++;
    }

    priority_queue<vertex> q;

    for (int i = 1; i <= N; i++)
        if (v[i].indegree == 0)
            q.push(v[i]);

    while (q.size())
    {
        cout << q.top().number << ' ';
        for (auto i : q.top().outedge)
        {
            if ((--(v[i].indegree)) == 0)
                q.push(v[i]);
        }
        q.pop();
    }

    return 0;
}