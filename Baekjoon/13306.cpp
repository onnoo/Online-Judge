#include <iostream>
#include <vector>

using namespace std;

vector<int> parent, root;
vector<bool> black;

int get_root(int n)
{
    if (root[n] == n) // root
        return n;
    return root[n] = get_root(parent[n]);
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N, Q, x, a, b;
    cin >> N >> Q;

    parent.assign(N + 1, 1);
    root.assign(N + 1, 1);
    black.assign(N + 1, 0);

    // parent[i] = i; i is root

    for (int i = 2; i <= N; i++)
    {
        cin >> a;
        parent[i] = a;
    }

    for (int i = 0; i < N - 1 + Q; i++)
    {
        cin >> x;
        if (x == 0)
        {
            cin >> a;
            black[root[a]] = true; // need to update root
            parent[a] = a;
            root[a] = a;
        }
        else // x == 1
        {
            cin >> a >> b;
            if (black[root[a]] == true)
                a = get_root(a);
            else
                a = root[a];

            if (black[root[b]] == true)
                b = get_root(b);
            else
                b = root[b];

            cout << (a == b ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}