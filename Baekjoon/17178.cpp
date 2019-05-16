#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

struct cmp
{
    bool operator()(string a, string b)
    {
        if (a[0] == b[0])
        {
            return atoi(a.c_str() + 2) > atoi(b.c_str() + 2);
        }
        return a[0] > b[0];
    }
};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    string str;
    priority_queue<string, vector<string>, cmp> pq;
    queue<string> q;
    stack<string> stk;

    while (N--)
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> str;
            pq.push(str);
            q.push(str);
        }
    }

    bool chk;

    while (!pq.empty())
    {
        chk = false;
        if (!stk.empty() && stk.top() == pq.top())
        {
            pq.pop();
            stk.pop();
            chk = true;
        }
        else if (!q.empty() && q.front() == pq.top())
        {
            pq.pop();
            q.pop();
            chk = true;
        }
        else // 둘 다 정답이 없는 경우
        {
            if (!q.empty())
            {
                stk.push(q.front());
                q.pop();
                chk = true;
            }
        }
        if (!chk)
        {
            cout << "BAD\n";
            return 0;
        }
    }
    cout << "GOOD\n";
    return 0;
}