#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct Country
{
    int num;
    int gold;
    int silver;
    int copper;
    int rank;
} Country;

int comp(const Country *A, const Country *B)
{
    if (A->gold != B->gold)
        return A->gold > B->gold;
    else if (A->silver != B->silver)
        return A->silver > B->silver;
    else
        return A->copper > B->copper;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K;
    cin >> N >> K;

    vector<Country *> v;

    for (int i = 0; i < N; i++)
    {
        int n, g, s, c;
        cin >> n >> g >> s >> c;
        Country *cou = (Country *)malloc(sizeof(Country));
        cou->num = n;
        cou->gold = g;
        cou->silver = s;
        cou->copper = c;
        v.push_back(cou);
    }

    sort(v.begin(), v.end(), comp);

    v[0]->rank = 1;
    if (v[0]->num == K)
        cout << v[0]->rank << '\n';
    else
    {
        int rank = 2;
        for (int i = 1; i < N; i++, rank++)
        {
            if (v[i - 1]->gold == v[i]->gold && v[i - 1]->silver == v[i]->silver && v[i - 1]->copper == v[i]->copper)
                v[i]->rank = v[i - 1]->rank;
            else
                v[i]->rank = rank;

            if (v[i]->num == K)
            {
                cout << v[i]->rank << '\n';
                break;
            }
        }
    }

    // for (auto i : v)
    // {
    //     cout << i->rank << ", " << i->num << ", " << i->gold << ", " << i->silver << ", " << i->copper << '\n';
    // }

    return 0;
}