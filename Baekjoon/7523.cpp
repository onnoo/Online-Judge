#include <iostream>

using namespace std;

typedef long long ll;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        ll A, B;
        cin >> A >> B;
        cout << "Scenario #" << t << ": \n";
        cout << (B - A + 1) * (A + B) / 2 << "\n\n";
    }

    return 0;
}