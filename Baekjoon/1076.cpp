#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long color(string s)
{
    if (s == "black")
        return 0;
    if (s == "brown")
        return 1;
    if (s == "red")
        return 2;
    if (s == "orange")
        return 3;
    if (s == "yellow")
        return 4;
    if (s == "green")
        return 5;
    if (s == "blue")
        return 6;
    if (s == "violet")
        return 7;
    if (s == "grey")
        return 8;
    if (s == "white")
        return 9;
    return 0;
}

int main(void)
{
    string str1;
    string str2;
    string str3;

    cin >> str1;
    cin >> str2;
    cin >> str3;

    long val = 0;
    val += color(str1) * 10;
    val += color(str2);

    val *= pow(10, color(str3));

    cout << val << endl;

    return 0;
}