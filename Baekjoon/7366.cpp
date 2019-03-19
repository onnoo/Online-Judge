#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, N, cnt;
    string s;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        cnt = 0;
        cin >> N;
        while (N--)
        {
            cin >> s;
            cnt += s == "sheep";
        }
        cout << "Case " << t << ": This list contains " << cnt << " sheep.\n\n";
    }

    return 0;
}