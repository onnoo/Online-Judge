#include <iostream>
#include <string>

using namespace std;

string arr[64];

string divide(int x1, int y1, int x2, int y2)
{
    int len = x2 - x1;

    if (len == 1)
    {
        return to_string(arr[x1][y1] - '0');
    }

    len /= 2;
    string ret = "";
    
    for (int i = x1; i < x2; i += len)
    {
        for (int j = y1; j < y2; j += len)
        {
            ret += divide(i, j, i + len, j + len);
        }
    }
    if (ret == "0000" || ret == "1111")
        return to_string(ret[0] - '0');
    else
        return "(" + ret + ")";
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cout << divide(0, 0, N, N) << '\n';

    return 0;
}