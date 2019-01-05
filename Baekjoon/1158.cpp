#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    queue<int> q;
    queue<int> ans;

    for (int i = 0; i < N; i++)
    {
        q.push(i + 1);
    }

    printf("<");
    while (!q.empty())
    {
        for (int i = 0; i < M - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        printf("%d", q.front());
        if (q.size() != 1)
        {
            printf(", ");
        }
        else
        {
            printf(">");
        }
        q.pop();
    }

    return 0;
}