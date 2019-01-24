#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int A, B, i = 1;
    string s;
    bool ans;
    cin >> A >> s >> B;
    while (s != "E")
    {
        if (s == ">" && A > B)
            ans = true;
        else if (s == ">=" && A >= B)
            ans = true;
        else if (s == "<" && A < B)
            ans = true;
        else if (s == "<=" && A <= B)
            ans = true;
        else if (s == "==" && A == B)
            ans = true;
        else if (s == "!=" && A != B)
            ans = true;
        else
            ans = false;

        printf("Case %d: ", i);
        if (ans)
            printf("true\n");
        else
            printf("false\n");
        i++;
        cin >> A >> s >> B;
    }

    return 0;
}