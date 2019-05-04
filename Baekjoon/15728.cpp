#include <iostream>
#include <list>
#include <algorithm>
#include <utility>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K, P;
    cin >> N >> K;

    list<pair<int, int>> ls;
    list<int> share;
    list<int> team;

    for (int i = 0; i < N; i++)
    {
        cin >> P;
        share.push_back(P);
    }

    for (int i = 0; i < N; i++)
    {
        cin >> P;
        team.push_back(P);
    }
    share.sort();
    team.sort();

    for (int i = 0; i < K; i++)
    {
        ls.clear();
        ls.push_back(make_pair(team.back() * share.back(), 1));
        ls.push_back(make_pair(team.back() * share.front(), 1));
        ls.push_back(make_pair(team.front() * share.back(), 0));
        ls.push_back(make_pair(team.front() * share.front(), 0));
        ls.sort();
        if (ls.back().second == 1)
            team.pop_back();
        else
            team.pop_front();
    }

    int m1 = max(team.back() * share.back(), team.front() * share.front());
    int m2 = max(team.back() * share.front(), team.front() * share.back());
    cout << max(m1, m2) << '\n';

    return 0;
}