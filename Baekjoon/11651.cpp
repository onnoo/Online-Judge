#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<int> *a, vector<int> *b)
{
    if (a->at(1) == b->at(1))
        return a->at(0) < b->at(0);
    else
        return a->at(1) < b->at(1);
}

int main(void)
{
    int N;
    scanf("%d", &N);

    vector<vector<int> *> v;

    vector<int> *pos;

    for (int i = 0; i < N; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        pos = new vector<int>();
        pos->push_back(x);
        pos->push_back(y);

        v.push_back(pos);
    }

    sort(v.begin(), v.end(), compare);

    for (vector<int> *pos : v)
    {
        printf("%d %d\n", pos->at(0), pos->at(1));
    }

    return 0;
}