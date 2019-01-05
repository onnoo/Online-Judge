#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string X;
        int *arr = (int *)calloc(10, sizeof(int));
        cin >> X;

        for (int j = 0; j < X.size(); j++)
        {
            *(arr + (X[j] - 48)) = *(arr + (X[j] - 48)) + 1;
        }

        int count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (*(arr + j) != 0)
                count++;
        }

        printf("%d\n", count);
    }

    return 0;
}