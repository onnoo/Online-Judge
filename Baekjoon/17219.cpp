#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    map<string, string> m;
    string addr, id;
    while (N--)
    {
        cin >> addr >> id;
        m[addr] = id;
    }
    while (M--)
    {
        cin >> addr;
        cout << m[addr] << '\n';
    }

    return 0;
}