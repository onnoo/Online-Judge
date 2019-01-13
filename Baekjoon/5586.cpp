#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    cin >> str;

    int JOI = 0, IOI = 0;

    int pos = 0;
    while ((pos = str.find("JOI", pos)) != string::npos)
    {
        JOI++;
        pos += 2;
    }
    pos = 0;
    while ((pos = str.find("IOI", pos)) != string::npos)
    {
        IOI++;
        pos += 2;
    }

    printf("%d\n%d\n", JOI, IOI);

    return 0;
}