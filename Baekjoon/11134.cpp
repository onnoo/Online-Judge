#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int N, C;
        cin >> N >> C;
        cout << N / C + (N % C ? 1 : 0) << '\n';
    }
    return 0;
}