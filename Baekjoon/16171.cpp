#include <iostream>

using namespace std;

int main(void)
{
    char S[101], K[101];
    scanf("%s", S);
    scanf("%s", K);
    bool result = false;
    int idx;
    for (int i = 0; S[i] && !result; i++)
    {
        if (S[i] == K[0])
        {
            idx = 0;
            for (int j = i; S[i] && K[idx]; j++)
            {
                if (S[j] < 58)
                    continue;
                if (S[j] == K[idx])
                    idx++;
                else
                    break;
            }
            if (K[idx] == '\0')
                result = true;
        }
    }
    cout << result << '\n';
    return 0;
}