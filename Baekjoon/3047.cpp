#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    string str;
    cin >> str;

    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(), v.end());

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'A')
            printf("%d ", v[0]);
        else if (str[i] == 'B')
            printf("%d ", v[1]);
        else if (str[i] == 'C')
            printf("%d ", v[2]);
    }
    printf("\n");

    return 0;
}