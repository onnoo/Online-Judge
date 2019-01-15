#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(void)
{
    int T;
    cin >> T;

    vector<pair<int, int>> v;
    for (int t = 1; t <= T; t++)
    {
        int n;
        cin >> n;
        printf("Pairs for %d: ", n);

        for (int i = 1; i < n / 2 + 1; i++)
        {
            if (i * 2 != n)
                v.push_back(make_pair(i, n - i));
        }
        for (int i = 0; i < v.size(); i++)
        {
            printf("%d %d", v[i].first, v[i].second);
            if (i < v.size() - 1)
                printf(", ");
        }
        printf("\n");
        v.clear();
    }
    return 0;
}