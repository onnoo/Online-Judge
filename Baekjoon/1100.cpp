#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    vector<string> v;

    for (int i = 0; i < 8; i++)
    {
        string str;
        cin >> str;
        v.push_back(str);
    }

    int count = 0;

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if ((i + j) % 2 == 0 && v[i][j] == 'F')
                count++;

    cout << count << endl;

    return 0;
}