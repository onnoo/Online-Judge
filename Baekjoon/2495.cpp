#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 3;
    while (n--)
    {
        string s;
        cin >> s;
        int max = 0;
        int tmp = 1;
        for (int i = 1; i < 8; i++)
        {
            if (s[i] != s[i - 1])
                tmp = 1;
            else
                tmp++;
            if (tmp > max)
                max = tmp;
        }
        printf("%d\n", max);
    }
    return 0;
}