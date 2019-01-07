#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
    int N, P;
    scanf("%d %d", &N, &P);

    vector<stack<int> *> v;

    for (int i = 0; i < 7; i++)
    {
        stack<int> *s = new stack<int>();
        s->push(0);
        v.push_back(s);
    }

    int count = 0;

    for (int i = 0; i < N; i++)
    {
        int line, fret;
        scanf("%d %d", &line, &fret);

        while ((v[line]->top()) > fret)
        {
            v[line]->pop();
            count++;
        }

        if ((v[line]->top()) < fret)
        {
            v[line]->push(fret);
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}