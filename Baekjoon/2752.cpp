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
    printf("%d %d %d\n", v[0], v[1], v[2]);

    return 0;
}