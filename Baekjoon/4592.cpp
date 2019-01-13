#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> v;

    int N;
    scanf("%d", &N);
    while (N != 0)
    {
        int tmp;
        for (int i = 0; i < N; i++)
        {
            int num;
            scanf("%d", &num);
            if (i == 0 || tmp != num)
                v.push_back(num);
            tmp = num;
        }
        for (int i : v)
            printf("%d ", i);
        printf("$\n");
        v.clear();
        scanf("%d", &N);
    }

    return 0;
}