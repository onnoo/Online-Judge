#include <iostream>
#include <string>
#include <queue>

using namespace std;

bool arr[26][26];
bool BFS(int src, int dest)
{
    int node;
    bool include[26] = {0};
    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        node = q.front();
        q.pop();
        for (int i = 0; i < 26; i++)
        {
            if (arr[node][i] && !include[i])
            {
                include[i] = true;
                if (i == dest)
                    return true;
                q.push(i);
            }
        }
    }
    return false;
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    string s;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        getline(cin, s);
        arr[s.front() - 'a'][s.back() - 'a'] = true;
    }
    cin >> M;
    cin.ignore();
    for (int i = 0; i < M; i++)
    {
        getline(cin, s);
        cout << (BFS(s.front() - 'a', s.back() - 'a') ? "T" : "F") << '\n';
    }

    return 0;
}