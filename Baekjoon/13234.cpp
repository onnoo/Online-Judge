#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string v1, op, v2;

    cin >> v1;
    cin >> op;
    cin >> v2;

    if (op == "AND")
    {
        if (v1 == "true" && v2 == "true")
            printf("true\n");
        else
            printf("false\n");
    }
    else
    {
        if (v1 == "false" && v2 == "false")
            printf("false\n");
        else
            printf("true\n");
    }

    return 0;
}