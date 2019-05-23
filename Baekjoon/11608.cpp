#include <iostream>
#include <string>
#include <queue>

using namespace std;

int arr[26];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 0;
    string s;
    cin >> s;

    for (char c : s)
    {
        arr[c - 'a']++;
    }

    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < 26; i++)
    {
        q.push(arr[i]);
    }

    while (q.size() > 2)
    {
        cnt += q.top();
        q.pop();
    }

    cout << cnt << '\n';

    return 0;
}