#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> v;
    int N, tmp;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &tmp);
        if (tmp == 0)
        {
            if (v.empty())
                printf("0\n");
            else
            {
                printf("%d\n", v.front());
                pop_heap(v.begin(), v.end(), greater<int>());
                v.pop_back();
            }
        }
        else
        {
            v.push_back(tmp);
            push_heap(v.begin(), v.end(), greater<int>());
        }
    }

    return 0;
}