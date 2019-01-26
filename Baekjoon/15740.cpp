#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    // 수 입력
    string A, B;
    cin >> A >> B;

    // 절댓값 비교
    bool A_is_bigger;
    string abs_A, abs_B;
    abs_A = (A[0] == '-' ? A.substr(1, A.size() - 1) : A);
    abs_B = (B[0] == '-' ? B.substr(1, B.size() - 1) : B);

    if ((abs_A.size()) == abs_B.size())
        A_is_bigger = abs_A > abs_B;
    else
        A_is_bigger = abs_A.size() > abs_B.size();

    string max, min;
    bool max_negative, min_negative;
    max_negative = min_negative = false;

    if (A_is_bigger)
    {
        max = abs_A;
        min = abs_B;
        if (A[0] == '-')
            max_negative = true;
        if (B[0] == '-')
            min_negative = true;
    }
    else
    {
        max = abs_B;
        min = abs_A;
        if (B[0] == '-')
            max_negative = true;
        if (A[0] == '-')
            min_negative = true;
    }

    // 연산자, 부호 결정
    bool oper = false; // true : plus, false : minus
    char sign = '+';
    if (max_negative)
        sign = '-';
    if (max_negative == min_negative)
        oper = true;

    // 연산
    string result = "";
    int max_sz = max.size() - 1, min_sz = min.size() - 1;
    int sum, carry = 0, zeros = 0;
    for (int i = 0; i <= max_sz; i++)
    {
        if (i <= min_sz)
        {
            if (oper)
            {
                sum = max[max_sz - i] + min[min_sz - i] - 96 + carry;
            }
            else
            {
                sum = max[max_sz - i] - min[min_sz - i] + carry;
            }
        }
        else
        {
            sum = max[max_sz - i] - 48 + carry;
        }

        if (sum >= 10)
        {
            carry = 1;
            sum -= 10;
        }
        else if (sum < 0)
        {
            carry = -1;
            sum += 10;
        }
        else
        {
            carry = 0;
        }
        result = (char)(sum + 48) + result;
    }
    if (carry)
        result = '1' + result;

    while (result[zeros] == '0')
        zeros++;
    zeros = (zeros == result.size() ? zeros - 1 : zeros);
    if (zeros)
        result = result.substr(zeros, result.size() - zeros);

    if (sign == '-' && result != "0")
        result = sign + result;

    printf("%s\n", result.c_str());

    return 0;
}