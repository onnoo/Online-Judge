#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] <= 90)
                printf("%c", str[j] - 65 + 97);
            else
                printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}