#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    string input;
    cin >> input;

    bool arr[3] = {true, false, false};

    bool tmp;
    for (int i = 0; i < input.size(); i++)
    {
        switch (input[i])
        {
        case 'A':
            tmp = arr[0];
            arr[0] = arr[1];
            arr[1] = tmp;
            break;
        case 'B':
            tmp = arr[1];
            arr[1] = arr[2];
            arr[2] = tmp;
            break;
        case 'C':
            tmp = arr[0];
            arr[0] = arr[2];
            arr[2] = tmp;
            break;
        }
    }

    for (int i = 0; i < 3; i++)
        if (arr[i])
            printf("%d\n", i + 1);

    return 0;
}