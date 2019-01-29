#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A, B, max, min, ans = "";
    cin >> A >> B;

    if (A.size() > B.size())
    {
        max = A;
        min = B;
    }
    else
    {
        max = B;
        min = A;
    }

    for (int i = 1; i <= max.size(); i++)
        ans = to_string(max[max.size() - i] - 48 + (i <= min.size() ? min[min.size() - i] - 48 : 0)) + ans;

    cout << ans << '\n';

    return 0;
}