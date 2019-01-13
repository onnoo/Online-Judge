#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[9];
vector<int> v;

void check()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            int sum = 0;
            for (int k = 0; k < 9; k++)
            {
                if (k == i || k == j)
                    continue;
                sum += arr[k];
                v.push_back(arr[k]);
            }
            if (sum == 100)
            {
                sort(v.begin(), v.end());
                for (int i : v)
                    printf("%d\n", i);
                return;
            }
            v.clear();
        }
    }
}

int main(void)
{
    for (int i = 0; i < 9; i++)
        scanf("%d", arr + i);

    check();

    return 0;
}