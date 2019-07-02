#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, H, M, S;
    vector<pair<int,pair<int,int>>> v;

    cin >> N;
    while (N--)
    {
        cin >> H >> M >> S;
        v.push_back(make_pair(H, make_pair(M, S)));
    }

    sort(v.begin(), v.end());

    for (pair<int,pair<int,int>> i : v)
    {
        cout << i.first << ' ' << i.second.first << ' ' << i.second.second << '\n';
    }

    return 0;
}