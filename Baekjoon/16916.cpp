#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string S, P;
    cin >> S >> P;
    cout << (S.find(P) != string::npos) << '\n';
    return 0;
}