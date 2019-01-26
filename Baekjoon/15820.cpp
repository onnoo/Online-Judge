#include <iostream>

using namespace std;

int main(void)
{
    int N, M, result = 0; // 0 : Accepted / 1 : Wrong Answer / 2 : Why Wrong!!!
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a != b)
            result = 1;
    }
    for (int i = 0; i < M; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (result == 0 && a != b)
            result = 2;
    }
    switch (result)
    {
    case 0:
        printf("Accepted\n");
        break;
    case 1:
        printf("Wrong Answer\n");
        break;
    case 2:
        printf("Why Wrong!!!\n");
    }
    return 0;
}