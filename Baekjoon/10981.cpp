#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>

using namespace std;

typedef struct Team
{
    char univ[31];
    char name[31];
    int solved;
    int penalty;
} Team;

int comp(const Team *A, const Team *B)
{
    if (A->solved == B->solved)
        return A->penalty < B->penalty;
    else
        return A->solved > B->solved;
}

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);
    map<string, Team *> m;
    auto it = m.begin();
    for (int i = 0; i < N; i++)
    {
        Team *t = (Team *)malloc(sizeof(Team));
        scanf("%s %s %d %d", t->univ, t->name, &(t->solved), &(t->penalty));
        string str = t->univ;
        if ((it = m.find(str)) == m.end())
            m.insert(make_pair(str, t));
        else if ((it->second->solved < t->solved) || (it->second->solved == t->solved && it->second->penalty > t->penalty))
        {
            m.erase(str);
            m.insert(make_pair(str, t));
        }
    }

    vector<Team *> v;
    for (it = m.begin(); it != m.end(); ++it)
        v.push_back(it->second);

    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < K; i++)
        printf("%s\n", v[i]->name);

    return 0;
}