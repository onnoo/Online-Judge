#include <iostream>
#include <string>

using namespace std;

int N, b;
string s1 = " of beer on the wall, ";
string s2 = " of beer.\nTake one down and pass it around, ";
string s22 = " of beer.\nGo to the store and buy some more, ";
string s3 = " of beer on the wall.\n";

string get_beer(int n)
{
    if (n == 0)
        return "no more bottles";
    else if (n < 0)
        return get_beer(N);
    else if (n == 1)
        return "1 bottle";
    else
        return to_string(n) + " bottles";
}

int main(void)
{
    string beer, left;
    string b1, b2;
    cin >> N;
    b = N;
    while (b >= 0)
    {
        cout << (b == 0 ? "No more bottles" : get_beer(b));
        cout << s1 << get_beer(b) << (b == 0 ? s22 : s2);
        cout << get_beer(b - 1) << s3;
        if (b-- > 0)
            cout << '\n';
    }
    return 0;
}