#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    int i, j;
    vector<string> v;

    for (i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        v.push_back(str);
    }

    int sz = v[0].size();

    string result = v[0];

    for (i = 0; i < sz; i++)
    {
        for (j = 1; j < N; j++)
        {
            if (result[i] == '?' && v[j][i] != '?')
            {
                result[i] = v[j][i];
            }
            if (v[j][i] != '?' && v[j][i] != result[i])
            {
                result[i] = '?';
                break;
            }
        }
    }

    cout << result << endl;

    return 0;
}