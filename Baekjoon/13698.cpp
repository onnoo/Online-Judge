#include <iostream>
#include <string>

using namespace std;

int cup[4] = {-1, 0, 0, 2}; // -1:작은공, 2:큰공

void swap(int a, int b)
{
    int tmp = cup[a];
    cup[a] = cup[b];
    cup[b] = tmp;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    for (int i = 0; s[i]; i++)
    {
        switch (s[i])
        {
        case 'A':
            swap(0, 1);
            break;
        case 'B':
            swap(0, 2);
            break;
        case 'C':
            swap(0, 3);
            break;
        case 'D':
            swap(1, 2);
            break;
        case 'E':
            swap(1, 3);
            break;
        default: //F
            swap(2, 3);
            break;
        }
    }

    for (int i = 0; i < 4; i++)
        if (cup[i] == -1)
            cout << i + 1 << '\n';

    for (int i = 0; i < 4; i++)
        if (cup[i] == 2)
            cout << i + 1 << '\n';

    return 0;
}