#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int A, B, C, D;
    int arr[4];

    for (int i = 0; i < 4; i++)
        scanf("%d", arr + i);
    sort(arr, arr + 4);

    printf("%d\n", arr[0] * arr[2]);

    return 0;
}