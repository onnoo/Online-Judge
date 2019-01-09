#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int avg = 0;
    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        int a;
        scanf("%d", &a);
        v.push_back(a);
        avg += a;
    }

    sort(v.begin(), v.end());

    int med = v[2];
    avg /= 5;

    printf("%d\n%d\n", avg, med);

    return 0;
}