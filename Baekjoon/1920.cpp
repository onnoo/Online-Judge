#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);
    vector<int> A;
    vector<int>::iterator iter;

    for (int i = 0; i < N; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        A.push_back(tmp);
    }

    int M;
    scanf("%d", &M);

    for (int i = 0; i < M; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        iter = find(A.begin(), A.end(), tmp);
        if (iter == A.end())
            printf("0\n");
        else
            printf("1\n");
    }

    return 0;
}