#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_pal(int n)
{
    string s = to_string(n);
    int sz = s.size();
    for (int i = 0; i < sz / 2; i++)
        if (s[i] != s[sz - 1 - i])
            return false;
    return true;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<bool> v(1004000, true);

    for (int i = 2; i <= 1004000; i++)
    {
        if (v[i]) // v[i]는 소수이다.
        {
            if (i >= N)
            {
                if (is_pal(i))
                {
                    cout << i << '\n';
                    break;
                }
            }
            for (int j = i; j < 1004000; j += i)
                v[j] = false;
        }
    }

    return 0;
}