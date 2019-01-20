#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string a, b;
    cin >> a;
    cin >> b;

    long long result = 0;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            result += ((a[i] - 48) * (b[j] - 48));
        }
    }

    printf("%lld\n", result);

    return 0;
}
