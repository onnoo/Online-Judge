#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s = "";
    int N;
    cin >> N;
    while (N != 0)
    {
        s = (char)(N % 9 + 48) + s;
        N /= 9;
    }
    cout << s << '\n';
    return 0;
}