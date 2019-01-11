#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    bool comp = false;
    if (N % 2 == 1)
        comp = true;

    string before, after;
    cin >> before;
    cin >> after;

    if (comp)
    {
        string result = "";
        for (int i = 0; i < before.size(); i++)
        {
            if (before[i] == '1')
                result = result + '0';
            else
                result = result + '1';
        }
        if (after == result)
            printf("Deletion succeeded\n");
        else
            printf("Deletion failed\n");
    }
    else
    {
        if (before == after)
            printf("Deletion succeeded\n");
        else
            printf("Deletion failed\n");
    }

    return 0;
}