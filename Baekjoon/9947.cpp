#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char a, b;
    int N, SA, SB;
    string A, B;
    cin >> A >> B;

    while (A != "#" || B != "#")
    {
        SA = 0, SB = 0;
        cin >> N;
        while (N--)
        {
            cin >> a >> b;
            SA += (a == b);
            SB += (a != b);
        }
        cout << A << ' ' << SA << ' ' << B << ' ' << SB << '\n';
        cin >> A >> B;
    }

    return 0;
}