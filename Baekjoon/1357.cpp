#include <iostream>
#include <vector>
#include <string>

using namespace std;

int rev(string str)
{
    string ret = "";
    for (int i = str.size() - 1; i >= 0; i--)
        ret = ret + str[i];
    return stoi(ret);
}

int main(void)
{
    string a, b;

    cin >> a;
    cin >> b;

    int result = rev(to_string(rev(a) + rev(b)));
    cout << result << endl;

    return 0;
}