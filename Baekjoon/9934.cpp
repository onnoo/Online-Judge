#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void push_node(int depth, int low, int high);

int K;
int *arr;
vector<vector<int>> v;

int main(void)
{
    scanf("%d", &K);

    int size = (int)(pow(2, K) - 1);

    arr = (int *)calloc(size, sizeof(int));

    for (int i = 0; i < size; i++)
    {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < K; i++)
    {
        vector<int> tmp;
        v.push_back(tmp);
    }

    push_node(0, 0, size - 1);

    for (vector<int> level : v)
    {
        for (int node : level)
        {
            printf("%d ", node);
        }
        printf("\n");
    }

    return 0;
}

void push_node(int depth, int low, int high)
{
    int mid = (low + high) / 2;
    v[depth].push_back(arr[mid]);
    if (low != mid)
    {
        push_node(depth + 1, low, mid - 1);
        push_node(depth + 1, mid + 1, high);
    }
}