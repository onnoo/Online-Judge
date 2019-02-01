#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void)
{
    string H, N;
    cin >> H >> N;
    int cnt = 0;

    unsigned long long idx = -1;

    while ((idx = H.find(N.c_str(), idx + 1)) != string::npos)
        cnt++;

    cout << cnt << '\n';

    return 0;
}