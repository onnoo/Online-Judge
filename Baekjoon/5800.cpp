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
        int student;
        scanf("%d", &student);

        for (int j = 0; j < student; j++)
        {
            int tmp;
            scanf("%d", &tmp);
            v.push_back(tmp);
        }

        sort(v.begin(), v.end());
        int gap = 0;
        for (int j = 0; j < student - 1; j++)
        {
            if (v[j + 1] - v[j] > gap)
                gap = v[j + 1] - v[j];
        }
        printf("Class %d\n", i + 1);
        printf("Max %d, Min %d, Largest gap %d\n", v[student - 1], v[0], gap);
        v.clear();
    }

    return 0;
}