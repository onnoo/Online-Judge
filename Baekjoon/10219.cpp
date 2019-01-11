#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    int T;
    scanf("%d", &T);

    vector<string> v;
    for (int t = 0; t < T; t++)
    {
        int H, W;
        scanf("%d %d", &H, &W);
        for (int i = 0; i < H; i++)
        {
            string str;
            cin >> str;
            v.push_back(str);
        }
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                printf("%c", v[i][W - j - 1]);
            }
            printf("\n");
        }
        v.clear();
    }
    return 0;
}