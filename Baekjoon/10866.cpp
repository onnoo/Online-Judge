#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    int N, tmp;
    cin >> N;
    deque<int> dq;
    string s;

    while (N--)
    {
        cin >> s;
        if (s == "push_back")
        {
            cin >> tmp;
            dq.push_back(tmp);
        }
        else if (s == "push_front")
        {
            cin >> tmp;
            dq.push_front(tmp);
        }
        else if (s == "front")
        {
            if (dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.front() << '\n';
        }
        else if (s == "back")
        {
            if (dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.back() << '\n';
        }
        else if (s == "size")
        {
            cout << dq.size() << '\n';
        }
        else if (s == "empty")
        {
            cout << dq.empty() << '\n';
        }
        else if (s == "pop_front")
        {
            if (dq.empty())
                cout << -1 << '\n';
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (s == "pop_back")
        {
            if (dq.empty())
                cout << -1 << '\n';
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
    }

    return 0;
}