#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string A, B, max, min;
    cin >> A >> B;

    if (A.size() > B.size())
    {
        max = A;
        min = B;
    }
    else
    {
        max = B;
        min = A;
    }

    string ret = "";
    int carry = 0;
    for (int i = 1; i <= max.size(); i++)
    {
        int sum = max[max.size() - i] - 48 + (i <= min.size() ? min[min.size() - i] - 48 : 0) + carry;
        if (sum > 9)
        {
            carry = 1;
            sum -= 10;
        }
        else
            carry = 0;

        ret = (char)(sum + 48) + ret;
    }
    if (carry)
        ret = '1' + ret;

    cout << ret << '\n';

    return 0;
}