#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Q;
    cin >> Q;
    while (Q--)
    {
        int a;
        bool ans = true;
        cin >> a;
        while (a != 1)
        {
            if (!(a % 2))
                a /= 2;
            else
            {
                ans = false;
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}