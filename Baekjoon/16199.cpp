#include <iostream>

using namespace std;

int main(void)
{
    int YY, MM, DD, year, month, day, age;
    cin >> YY >> MM >> DD >> year >> month >> day;

    age = year - YY;
    if (YY < year)
    {
        if ((MM == month && DD <= day) || MM < month)
            cout << age << '\n';
        else
            cout << age - 1 << '\n';
    }
    else
        cout << age << '\n';
    cout << age + 1 << '\n';
    cout << age << '\n';
    return 0;
}