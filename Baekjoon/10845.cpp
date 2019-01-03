#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int main(void)
{
    queue<int> q;
    int N;
    cin >> N;

    char s[6];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", s);
        if (!strcmp(s, "push"))
        {
            int a;
            scanf("%d", &a);
            q.push(a);
        }
        else if (!strcmp(s, "front"))
        {
            if (q.empty())
                printf("-1\n");
            else
                printf("%d\n", q.front());
        }
        else if (!strcmp(s, "back"))
        {
            if (q.empty())
                printf("-1\n");
            else
                printf("%d\n", q.back());
        }
        else if (!strcmp(s, "size"))
            printf("%d\n", q.size());
        else if (!strcmp(s, "empty"))
            printf("%d\n", q.empty());
        else if (!strcmp(s, "pop"))
        {
            if (q.empty())
                printf("-1\n");
            else
            {
                int a = q.front();
                printf("%d\n", a);
                q.pop();
            }
        }
    }

    return 0;
}