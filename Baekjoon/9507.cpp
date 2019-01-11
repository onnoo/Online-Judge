#include <iostream>

using namespace std;

long long arr[68] = {0};

long long koong(int num)
{

    for (int i = 0; i <= num; i++)
    {

        if (arr[i] != 0)
            continue;
        if (i < 2)
            arr[i] = 1;
        else if (i == 2)
            arr[i] = 2;
        else if (i == 3)
            arr[i] = 4;
        else
            arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4];
    }
    return arr[num];
}

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        printf("%lld\n", koong(num));
    }
    return 0;
}