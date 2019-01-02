#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    queue<int> q;
    int buffer_size;

    cin >> buffer_size;

    int input;

    cin >> input;

    while (input != -1)
    {
        if (input == 0)
            q.pop();
        else
        {
            if (q.size() < buffer_size)
                q.push(input);
        }
        cin >> input;
    }

    while (!q.empty())
    {
        printf("%d ", q.front());
        q.pop();
    }

    cout << endl;

    return 0;
}