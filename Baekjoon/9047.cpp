#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int max_num(string str)
{
    vector<char> v;
    for (int i = 0; i < str.size(); i++)
        v.push_back(str[i]);
    sort(v.begin(), v.end(), greater<char>());
    string ret = "";
    for (int i = 0; i < v.size(); i++)
        ret = ret + v[i];
    return stoi(ret.c_str());
}

int min_num(string str)
{
    vector<char> v;
    for (int i = 0; i < str.size(); i++)
        v.push_back(str[i]);
    sort(v.begin(), v.end());
    string ret = "";
    for (int i = 0; i < v.size(); i++)
        ret = ret + v[i];
    return stoi(ret.c_str());
}

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        string num;
        cin >> num;
        int count = 0;
        while (num != "6174")
        {
            count++;
            num = to_string(max_num(num) - min_num(num));
            if (num.size() < 4)
                num = '0' + num;
        }
        printf("%d\n", count);
    }

    return 0;
}