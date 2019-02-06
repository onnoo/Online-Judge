#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    string s;
    cin >> s;

    int cnt = 0;
    unsigned long idx = -4;
    while ((idx = s.find("pPAp", idx + 4)) != string::npos)
        cnt++;

    cout << cnt << '\n';

    return 0;
}