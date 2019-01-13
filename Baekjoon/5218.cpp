#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        printf("Distances: ");
        for (int j = 0; j < s1.size(); j++)
        {
            if (s2[j] >= s1[j])
                printf("%d ", s2[j] - s1[j]);
            else
                printf("%d ", s2[j] - s1[j] + 26);
        }
        printf("\n");
    }

    return 0;
}