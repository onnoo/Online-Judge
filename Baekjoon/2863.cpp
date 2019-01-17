#include <iostream>

using namespace std;

int main(void)
{
    double A, B, C, D;
    double arr[4] = {0, 0, 0, 0};
    cin >> A >> B >> C >> D;
    arr[0] = A / C + B / D;
    arr[1] = C / D + A / B;
    arr[2] = D / B + C / A;
    arr[3] = B / A + D / C;
    double max = 0;
    int count = 0;
    for (int i = 0; i < 4; i++)
        if (max < arr[i])
        {
            max = arr[i];
            count = i;
        }
    printf("%d\n", count);

    return 0;
}