#include <iostream>
#include <string>

using namespace std;

int N, cnt = 0;
string s;

void func(int idx)
{
    if (idx == N - 1)
        cnt += !(stoi(s.c_str()) % 3);

    else
    {
        for (int i = 48; i < 51; i++)
        {
            s[idx + 1] = (char)i;
            func(idx + 1);
        }
    }
}

int main(void)
{
    scanf("%d", &N);
    s.assign(N, '0');

    s[0] = '1';
    func(0);
    s[0] = '2';
    func(0);

    printf("%d\n", cnt);

    return 0;
}