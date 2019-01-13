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

        bool *arr = (bool *)calloc(26, sizeof(bool));
        for (int j = 0; j < str.size(); j++)
        {
            if (!arr[str[j] - 65])
                arr[str[j] - 65] = true;
        }

        int total = 0;
        for (int j = 0; j < 26; j++)
        {
            if (!arr[j])
                total += j + 65;
        }
        printf("%d\n", total);
    }

    return 0;
}