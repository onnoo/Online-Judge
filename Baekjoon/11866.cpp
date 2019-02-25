#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    vector<int> v;
    for (int i = 1; i <= N; i++)
        v.push_back(i);
    cout << '<';
    while (!v.empty())
    {
        for (int i = 0; i < M; i++)
        {
            auto it = v.begin();
            rotate(v.begin(), ++it, v.end());
        }
        cout << v.back();
        if (v.size() != 1)
            cout << ", ";
        v.pop_back();
    }
    cout << ">\n";

    return 0;
}