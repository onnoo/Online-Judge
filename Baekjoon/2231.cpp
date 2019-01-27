#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    bool flag = true;
    for (int i = 54; i > 0; i--)
    {
        string tmp = to_string(N - i);
        int sum = 0;
        for (int i = 0; tmp[i]; i++)
            sum += tmp[i] - 48;
        if (N == sum + stoi(tmp.c_str()))
        {
            cout << tmp << '\n';
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "0\n";

    return 0;
}