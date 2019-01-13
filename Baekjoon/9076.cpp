#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int total = 0;
        for (int j = 0; j < 5; j++)
        {
            int score;
            scanf("%d", &score);
            total += score;
            v.push_back(score);
        }
        sort(v.begin(), v.end());
        if (v[3] - v[1] >= 4)
            printf("KIN\n");
        else
            printf("%d\n", total - v[0] - v[4]);
        v.clear();
    }
    return 0;
}