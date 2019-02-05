#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, Q;
    cin >> N >> Q;

    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        for (int j = 0; j < tmp; j++)
            v.push_back(i + 1);
    }

    for (int i; i < Q; i++)
    {
        int tmp;
        cin >> tmp;
        cout << v[tmp] << '\n';
    }

    return 0;
}