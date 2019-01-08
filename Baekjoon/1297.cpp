#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int dia_len, h_rate, w_rate;
    scanf("%d %d %d", &dia_len, &h_rate, &w_rate);

    float dia_len_rate = sqrt(pow(h_rate, 2) + pow(w_rate, 2));

    float k = dia_len / dia_len_rate;

    printf("%d %d\n", (int)(h_rate * k), (int)(w_rate * k));

    return 0;
}