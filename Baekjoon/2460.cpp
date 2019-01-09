#include <iostream>

using namespace std;

int main(void)
{
    int max_count = 0;
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        int out, in;
        scanf("%d %d", &out, &in);
        count -= out;
        count += in;

        if (count > max_count)
        {
            max_count = count;
        }
    }

    printf("%d\n", max_count);

    return 0;
}