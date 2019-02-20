#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string num;
    cin >> num;

    int count = 0;
    while (num.size() != 1)
    {
        int sum = 0;
        ;
        for (int i = 0; i < num.size(); i++)
            sum += num[i] - 48;
        num = to_string(sum);
        count++;
    }

    printf("%d\n", count);
    if ((num[0] - 48) % 3 == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}