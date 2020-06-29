#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    int N, num, answer = 0;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        if (s.empty() || s.top() < arr[i])
        {
            s.push(arr[i]);
            answer++;
        }
    }

    cout << answer << '\n';

    return 0;
}