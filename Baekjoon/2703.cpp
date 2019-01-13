#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    while (N--)
    {
        cin.ignore();
        string s, p;
        getline(cin, s);
        cin >> p;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                printf(" ");
            }
            else
            {
                printf("%c", p[s[i] - 65]);
            }
        }
        printf("\n");
    }

    return 0;
}