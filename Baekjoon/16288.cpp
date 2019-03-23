#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    vector<stack<int>> v(M);
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < N; i++)
    {
        int t = arr[i];
        bool flag = true;
        for (int j = 0; j < M; j++)
        {
            if (v[j].empty() || v[j].top() < t)
            {
                v[j].push(t);
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}