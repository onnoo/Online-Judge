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
    int num = 665;
    while (N)
    {
        num++;
        s = to_string(num);
        if (s.find("666") != string::npos)
            N--;
    }

    cout << num << '\n';

    return 0;
}