#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string num;
    cin >> num;
    int M;
    cin >> M;

    int count = 0;
    if (num.size() * stoi(num.c_str()) > M)
        count = M;
    else
        count = num.size() * stoi(num.c_str());

    int idx = 0;
    for (int i = 0; i < count; i++)
    {
        printf("%c", num[idx]);
        if (idx == num.size() - 1)
            idx = 0;
        else
            idx++;
    }
    printf("\n");

    return 0;
}