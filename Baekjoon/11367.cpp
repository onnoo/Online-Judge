#include <iostream>
#include <string>

using namespace std;

string grade(int num)
{
    string ret;
    if (num >= 97)
        ret = "A+";
    else if (num >= 90)
        ret = "A";
    else if (num >= 87)
        ret = "B+";
    else if (num >= 80)
        ret = "B";
    else if (num >= 77)
        ret = "C+";
    else if (num >= 70)
        ret = "C";
    else if (num >= 67)
        ret = "D+";
    else if (num >= 60)
        ret = "D";
    else
        ret = "F";
    return ret;
}

int main(void)
{
    int N;
    cin >> N;
    while (N--)
    {
        int num;
        string s;
        cin >> s >> num;
        cout << s << ' ' << grade(num) << '\n';
    }

    return 0;
}