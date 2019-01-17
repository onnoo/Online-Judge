#include <iostream>

using namespace std;

int main(void)
{
    int A, B;
    cin >> A >> B;
    int i = 0, j, sum = 0, count = 0;
    while (count != B)
    {
        i++;
        j = i;
        while (j)
        {
            count++;
            if (count >= A && count <= B)
                sum += i;
            if (count == B)
                break;
            j--;
        }
    }

    cout << sum << '\n';

    return 0;
}