#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
    string A;
    string B;

    cin >> A;
    cin >> B;

    int min_A = 0;
    int min_B = 0;
    int max_A = 0;
    int max_B = 0;

    int min = 0;
    int max = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == '6')
            min_A += 5 * pow(10, A.size() - i - 1);
        else
            min_A += (A[i] - 48) * pow(10, A.size() - i - 1);
    }

    for (int i = 0; i < B.size(); i++)
    {
        if (B[i] == '6')
            min_B += 5 * pow(10, B.size() - i - 1);
        else
            min_B += (B[i] - 48) * pow(10, B.size() - i - 1);
    }

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == '5')
            max_A += 6 * pow(10, A.size() - i - 1);
        else
            max_A += (A[i] - 48) * pow(10, A.size() - i - 1);
    }

    for (int i = 0; i < B.size(); i++)
    {
        if (B[i] == '5')
            max_B += 6 * pow(10, B.size() - i - 1);
        else
            max_B += (B[i] - 48) * pow(10, B.size() - i - 1);
    }

    min = min_A + min_B;
    max = max_A + max_B;

    printf("%d %d\n", min, max);

    return 0;
}