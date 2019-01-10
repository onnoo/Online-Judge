#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    char s[101];
    scanf("%s", s);

    char *ptr = strtok(s, ",");

    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = strtok(NULL, ",");
    }

    cout << count << '\n';

    return 0;
}