#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int num;
    cin >> num;
    while (num != 0)
    {
        printf("%d is ", num);
        if (num % N != 0)
            printf("NOT ");
        printf("a multiple of %d.\n", N);
        cin >> num;
    }
    return 0;
}