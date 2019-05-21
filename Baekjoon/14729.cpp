#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    double num;
    cin >> N;

    priority_queue<double, vector<double>, greater<double>> q;

    while (N--)
    {
        cin >> num;
        q.push(num);
    }

    cout << fixed;
    cout.precision(3);
    for (int i = 0; i < 7; i++)
    {
        cout << q.top() << '\n';
        q.pop();
    }
    return 0;
}