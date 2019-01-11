#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string A, B;
    cin >> A;
    cin >> B;

    string *large_num;
    string *small_num;

    if (A.size() > B.size())
    {
        large_num = &A;
        small_num = &B;
    }
    else
    {
        large_num = &B;
        small_num = &A;
    }

    string result = "";
    int carry = 0;
    int sum;
    int large_num_size = large_num->size();
    int small_num_size = small_num->size();
    for (int i = 1; i <= large_num_size; i++)
    {
        if (i <= small_num_size)
            sum = large_num->at(large_num_size - i) + small_num->at(small_num_size - i) + carry - 96;
        else
            sum = large_num->at(large_num_size - i) + carry - 48;

        if (sum >= 10)
        {
            carry = 1;
            sum -= 10;
        }
        else
        {
            carry = 0;
        }
        result = to_string(sum) + result;
    }

    if (carry == 1)
        result = "1" + result;

    cout << result << "\n";

    return 0;
}