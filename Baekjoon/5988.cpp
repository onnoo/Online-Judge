#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;
    int N;
    cin >> N;
    while (N--)
    {
        cin >> s;
        if ((s.back() - 48) % 2 == 0)
            cout << "even\n";
        else
            cout << "odd\n";
    }
    return 0;
}