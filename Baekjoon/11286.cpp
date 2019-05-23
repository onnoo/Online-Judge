#include <iostream>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;

struct comp
{
    bool operator()(int a, int b)
    {
        if (abs(a) == abs(b))
            return a > b;
        return abs(a) > abs(b);
    }
};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<int, vector<int>, comp> q;
    int N, cmd;
    cin >> N;

    while (N--)
    {
        cin >> cmd;
        if (cmd)
        {
            q.push(cmd);
        }
        else
        {
            if (q.empty())
                cout << 0 << '\n';
            else
            {
                cout << q.top() << '\n';
                q.pop();
            }
        }
    }

    return 0;
}