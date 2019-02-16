#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    int R, C, ZR, ZC;
    scanf("%d %d %d %d", &R, &C, &ZR, &ZC);

    vector<string> v;

    for (int i = 0; i < R; i++)
    {
        string str;
        cin >> str;
        v.push_back(str);
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < ZR; j++)
        {
            for (int k = 0; k < C; k++)
            {
                for (int l = 0; l < ZC; l++)
                {
                    printf("%c", v[i][k]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}