#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int h;
        scanf("%d", &h);
        string act;
        cin >> act;

        for (int i = 0; i < act.size(); i++)
        {
            if (act[i] == 'c')
                h++;
            else
                h--;
        }
        printf("Data Set %d:\n", i + 1);
        printf("%d\n", h);
        if (i < act.size() - 1)
            printf("\n");
    }
    return 0;
}