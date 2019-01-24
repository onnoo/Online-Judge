#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N, carry, nsz1, nsz2, unit_sum;
    scanf("%d", &N);
    string num1 = "0";
    string num2 = "1";
    string tmp;
    if (N < 2)
        printf("%d\n", N);
    else
    {
        for (int i = 2; i <= N; i++)
        {
            carry = 0;
            tmp = num2;
            for (int j = 1; j <= num2.size(); j++)
            {
                if (j <= num1.size())
                    unit_sum = num2[num2.size() - j] + num1[num1.size() - j] + carry - 96;
                else
                    unit_sum = num2[num2.size() - j] + carry - 48;
                // cout << unit_sum << '\n';
                if (unit_sum >= 10)
                {
                    carry = 1;
                    unit_sum -= 10;
                }
                else
                    carry = 0;
                num2[num2.size() - j] = (char)(unit_sum + 48);
            }
            if (carry > 0)
                num2 = "1" + num2;
            num1 = tmp;
        }
        cout << num2 << '\n';
    }

    return 0;
}