#include <iostream>

using namespace std;

int main(void)
{
    int r, w, l, i = 1;
    cin >> r;

    while (r != 0)
    {
        cin >> w >> l;
        cout << "Pizza " << i;
        if (w * w + l * l > 4 * r * r)
            cout << " does not fit ";
        else
            cout << " fits ";
        cout << "on the table.\n";
        i++;
        cin >> r;
    }
    return 0;
}