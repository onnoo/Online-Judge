#include <iostream>

using namespace std;

void check(int a, int b)
{
    cout << (a == b ? "correct" : "wrong answer") << '\n';
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    long long a, b, ans;
    char op, eq;
    cin >> T;
    while (T--)
    {
        cin >> a >> op >> b >> eq >> ans;
        switch (op)
        {
        case '+':
            check(a + b, ans);
            break;
        case '-':
            check(a - b, ans);
            break;
        case '*':
            check(a * b, ans);
            break;
        case '/':
            check(a / b, ans);
            break;
        default:
            break;
        }
    }

    return 0;
}