#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    cin.ignore();

    while (N--)
    {
        string s, tmp = " ";
        getline(cin, s);
        int idx = s.find(' ', s.find(' ') + 1);
        cout << s.substr(idx + 1, s.size() - idx) << ' ' << s.substr(0, idx) << '\n';
    }

    return 0;
}