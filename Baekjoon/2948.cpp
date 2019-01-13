#include <iostream>
#include <string>

using namespace std;

string week[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void)
{
    int M, D;
    scanf("%d %d", &D, &M);

    int days = D;
    for (int i = 1; i < M; i++)
    {
        days += month[i - 1];
    }

    cout << week[days % 7] << '\n';

    return 0;
}