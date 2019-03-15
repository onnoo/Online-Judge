#include <iostream>
#include <cmath>
#include <stack>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num = 0;
    int A, B, M;
    cin >> A >> B >> M;
    for (int i = M - 1; i >= 0; i--)
    {
        int tmp;
        cin >> tmp;
        num += pow(A, i) * tmp;
    }

    stack<int> s;
    while (num)
    {
        s.push(num % B);
        num /= B;
    }

    while (!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }

    return 0;
}