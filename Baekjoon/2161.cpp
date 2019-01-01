#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    queue<int> q;
    int N;
    int i;

    cin >> N;

    for (i = 1; i <= N; i++)
    {
        q.push(i);
    }

    i = 0;

    while (!q.empty())
    {
        if (i % 2 == 0)
        {
            printf("%d ", q.front());
            q.pop();
        }
        else
        {
            q.push(q.front());
            q.pop();
        }

        i++;
    }
    cout << endl;

    return 0;
}