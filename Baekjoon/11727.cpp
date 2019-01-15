#include <iostream>

using namespace std;

int *arr;

int tile(int k)
{
    if (arr[k] != 0)
        return arr[k];

    if (k == 0)
        return arr[k] = 1;
    else if (k == 1)
        return arr[k] = 3;

    return arr[k] = (tile(k - 1) + tile(k - 2) * 2) % 10007;
}

int main(void)
{
    int n;
    cin >> n;

    arr = (int *)calloc(n, sizeof(int));
    printf("%d\n", tile(n - 1));

    return 0;
}