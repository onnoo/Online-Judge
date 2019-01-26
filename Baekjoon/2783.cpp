#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    vector<double> v;
    int X, Y, N;
    scanf("%d %d", &X, &Y);
    v.push_back((double)X / Y);
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d %d", &X, &Y);
        v.push_back((double)X / Y);
    }

    sort(v.begin(), v.end());

    printf("%.2lf\n", v[0] * 1000 + 1e-9);

    return 0;
}