#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
    string str;
    cin >> str;

    long long result = 0;
    for (int i = 0; i < str.size(); i++)
    {
        result += (str[str.size() - i - 1] - 64) * pow(26, i);
    }
    printf("%lld\n", result);

    return 0;
}