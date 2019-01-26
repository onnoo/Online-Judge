#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    int szA, szB, num, cnt = 0;
    scanf("%d%d", &szA, &szB);
    set<int> A, B;
    for (int i = 0; i < szA; i++)
    {
        scanf("%d", &num);
        A.insert(num);
    }
    for (int i = 0; i < szB; i++)
    {
        scanf("%d", &num);
        if (A.find(num) != A.end())
            cnt++;
        B.insert(num);
    }
    printf("%d\n", szA + szB - 2 * cnt);

    return 0;
}