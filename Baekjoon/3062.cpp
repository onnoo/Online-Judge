#include <iostream>
#include <string>

using namespace std;

int rev(string str)
{
    string ret = "";
    for (int i = str.size() - 1; i >= 0; i--)
        ret = ret + str[i];
    return stoi(ret.c_str());
}

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        string num;
        cin >> num;
        int sum = stoi(num.c_str()) + rev(num);
        if (sum == rev(to_string(sum)))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}