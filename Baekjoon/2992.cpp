#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    string s, ss;
    cin >> s;
    ss = s;
    int sz = s.size();
    for (int i = sz - 1; i >= 1; i--)
    {
        if (s[i] > s[i - 1])
        {
            char tmp = s[i - 1];
            int idx = i;
            char min = s[idx];
            for (int j = i + 1; j < sz; j++)
            {
                if (tmp < s[j] && s[j] < min)
                {
                    idx = j;
                    min = s[idx];
                }
            }
            s[idx] = tmp;
            s[i - 1] = min;
            auto it = s.begin();
            advance(it, i);
            sort(it, s.end());
            break;
        }
    }
    if (ss != s)
        printf("%s\n", s.c_str());
    else
        printf("0\n");

    return 0;
}