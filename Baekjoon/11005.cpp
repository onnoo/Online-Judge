#include <iostream>
#include <string>

using namespace std;

string convert(int N, int base)
{
    string ret = "";
    int tmp;
    while (N > 0)
    {
        ret = (char)((tmp = N % base) < 10 ? 48 + tmp : tmp + 55) + ret;
        N /= base;
    }
    return ret;
}

int main(void)
{
    int N, base;
    scanf("%d %d", &N, &base);
    printf("%s\n", convert(N, base).c_str());

    return 0;
}