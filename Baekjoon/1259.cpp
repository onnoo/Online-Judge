#include <iostream>
#include <string>

using namespace std;

bool pal(int N)
{
    string str = to_string(N);
    bool ret = true;
    for (int i = 0; i < str.size() / 2; i++)
        if (str[i] != str[str.size() - i - 1])
            return false;
    return true;
}

int main(void)
{
    int N;
    scanf("%d", &N);

    while (N != 0)
    {
        if (pal(N))
            printf("yes\n");
        else
            printf("no\n");
        scanf("%d", &N);
    }

    return 0;
}