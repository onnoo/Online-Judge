#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> M >> N;

    vector<bool> v(N + 1);
    vector<int> p;

    for (int i = 2; i <= N; i++)
    {
        if (!v[i])
        {
            if (i >= M)
                p.push_back(i);
            for (int j = i; j <= N; j += i)
                v[j] = true;
        }
    }

    for (int i : p)
        cout << i << '\n';

    return 0;
}