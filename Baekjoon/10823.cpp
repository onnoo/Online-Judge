#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    char arr[1000001];
    string S;
    char *cp;
    int sum = 0;
    while (scanf("%s", arr) != EOF)
    {
        string sub(arr);
        S += sub;
    }
    cp = strtok(&S[0], ",");
    while (cp != nullptr)
    {
        sum += stoi(cp);
        cp = strtok(nullptr, ",");
    }
    cout << sum << '\n';

    return 0;
}