#include <iostream>
#include <string>

using namespace std;

char convert(int n)
{
    if (n <= 25)
        return (char)(65 + n);
    else if (n <= 51)
        return (char)(97 + n - 26);
    else if (n <= 61)
        return (char)(48 + n - 52);
    else if (n == 62)
        return '+';
    else
        return '/';
}

string n_ary(int num, int base)
{
    string ret = "";
    while (num > 0)
    {
        ret = ret + convert(num % base);
        num /= base;
    }
    return ret;
}

int check(int num)
{
    for (int i = 2; i <= 64; i++)
    {
        string a = n_ary(num, i);
        bool ret = true;
        for (int j = 0; j < a.size() / 2; j++)
        {
            if (a[j] != a[a.size() - j - 1])
            {
                ret = false;
                break;
            }
        }
        if (ret)
            return 1;
    }
    return 0;
}

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        printf("%d\n", check(num));
    }
    return 0;
}