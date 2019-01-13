#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int arr[10];
        for (int i = 0; i < 10; i++)
            scanf("%d", arr + i);
        sort(arr, arr + 10);
        printf("%d\n", arr[7]);
    }

    return 0;
}