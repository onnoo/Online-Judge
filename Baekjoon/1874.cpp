#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    stack<int> s;
    char answer[N + N];
    int idx = 0;
    int push = 1;
    for (int i = 0; i < N; i++)
    {
        while (arr[i] >= push)
        {
            s.push(push++);
            answer[idx++] = '+';
        }
        if (s.top() != arr[i])
        {
            cout << "NO";
            return 0;
        }
        s.pop();
        answer[idx++] = '-';
    }

    for (int i = 0; i < N + N; i++)
    {
        cout << answer[i] << '\n';
    }

    return 0;
}