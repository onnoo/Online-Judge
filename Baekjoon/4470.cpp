#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;
    int N;
    cin >> N;
    cin.ignore();
    for (int i = 1; i <= N; i++)
    {
        getline(cin, s);
        cout << i << ". " << s << '\n';
    }

    return 0;
}