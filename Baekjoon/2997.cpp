#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(), v.end());
    int term1 = v[1] - v[0];
    int term2 = v[2] - v[1];

    if (term1 == term2)
        printf("%d\n", v[2] + term2);
    else
    {
        if (term1 > term2)
        {
            printf("%d\n", v[1] - term2);
        }
        else
        {
            printf("%d\n", v[1] + term1);
        }
    }

    return 0;
}