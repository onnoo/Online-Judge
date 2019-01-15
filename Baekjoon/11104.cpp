#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    while (n--)
    {
        int decimal = 0;
        string bin;
        cin >> bin;
        int sz = bin.size();
        for (int i = 0; i < sz; i++)
            decimal += (bin[sz - i - 1] - 48) * pow(2, i);
        printf("%d\n", decimal);
    }

    return 0;
}