#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    queue<int> q;
    int n, T, tmp, count = 0;
    cin >> n >> T;

    while (n--)
    {
        cin >> tmp;
        q.push(tmp);
    }

    while (!q.empty() && (T -= q.front()) >= 0)
    {
        q.pop();
        count++;
    }
    cout << count << '\n';
    return 0;
}