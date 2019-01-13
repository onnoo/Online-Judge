#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    while (N != 0)
    {
        while (N >= 10)
        {
            string s = to_string(N);
            int sum = 0;
            for (int i = 0; i < s.size(); i++)
                sum += s[i] - 48;
            N = sum;
        }
        printf("%d\n", N);
        scanf("%d", &N);
    }

    return 0;
}