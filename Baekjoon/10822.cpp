#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void)
{
    char s[101];
    scanf("%s", s);

    char *ptr = strtok(s, ",");

    int total = 0;
    while (ptr != NULL)
    {
        total += stoi(ptr);
        ptr = strtok(NULL, ",");
    }

    cout << total << '\n';

    return 0;
}