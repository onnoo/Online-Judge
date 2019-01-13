#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
    string N;
    int B, result = 0;
    cin >> N >> B;

    for (int i = 0; i < N.size(); i++)
    {
        char c = N[N.size() - i - 1];

        result += (c < 65 ? c - 48 : c - 55) * pow(B, i);
    }

    printf("%d\n", result);

    return 0;
}