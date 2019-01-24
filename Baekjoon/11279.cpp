#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, x;
    vector<int> v;
    make_heap(v.begin(), v.end());
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &x);
        if (x != 0)
        {
            v.push_back(x);
            push_heap(v.begin(), v.end());
        }
        else
        {
            if (!v.empty())
            {
                pop_heap(v.begin(), v.end());
                printf("%d\n", v.back());
                v.pop_back();
            }
            else
                printf("0\n");
        }
    }
    return 0;
}