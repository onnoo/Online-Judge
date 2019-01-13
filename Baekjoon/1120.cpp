#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string A, B;
    cin >> A;
    cin >> B;

    int min = 51;
    for (int i = 0; i <= B.size() - A.size(); i++)
    {
        int tmp = 0;
        for (int j = 0; j < A.size(); j++)
        {
            if (A[j] != B[i + j])
                tmp++;
        }
        if (min > tmp)
            min = tmp;
    }

    printf("%d\n", min);

    return 0;
}