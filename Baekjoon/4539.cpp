#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int my_round(string str, int idx)
{
    if (idx == str.size())
        return stoi(str.c_str());
    double num = stoi(str.c_str());
    num /= pow(10, idx);
    num = round(num);
    int result = num * pow(10, idx);
    return my_round(to_string(result), ++idx);
}

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        printf("%d\n", my_round(str, 0));
    }

    return 0;
}