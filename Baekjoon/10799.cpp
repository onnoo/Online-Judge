#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    stack<int> s;

    int total = 0;
    char c;
    char prev = '(';

    while ((c = getchar()) != '\n')
    {
        if (c == '(')
        {
            s.push('(');
        }
        else // c == ')'
        {
            if (prev == '(')
            {
                s.pop();
                total += s.size();
            }
            else
            {
                s.pop();
                total++;
            }
        }

        prev = c;
    }

    printf("%d\n", total);

    return 0;
}