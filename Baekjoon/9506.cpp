#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else if (a > b)
        return gcd(b, a % b);
    else
        return gcd(a, b % a);
}

int main(void)
{
    vector<int> v;
    int N, sum;
    scanf("%d", &N);
    while (N != -1)
    {
        sum = 0;
        for (int i = 1; i < N; i++)
        {
            if (gcd(N, i) == i)
            {
                v.push_back(i);
                sum += i;
            }
        }
        if (sum == N)
        {
            printf("%d = ", N);
            for (int i = 0; i < v.size(); i++)
            {
                printf("%d ", v[i]);
                if (i != v.size() - 1)
                    printf("+ ");
            }
            printf("\n");
        }
        else
            printf("%d is NOT perfect.\n", N);
        v.clear();
        scanf("%d", &N);
    }
    return 0;
}