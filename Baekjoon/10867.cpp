#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    set<int> s;
    vector<int> v;
    int N, tmp;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &tmp);
        s.insert(tmp);
    }
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        v.push_back(*it);
    }
    sort(v.begin(), v.end());
    for (int i : v)
        printf("%d ", i);
    printf("\n");

    return 0;
}