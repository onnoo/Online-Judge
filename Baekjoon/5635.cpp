#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    int N;
    string input;
    cin >> N;

    vector<pair<string, string>> v;
    for (int i = 0; i < N; i++)
    {
        pair<string, string> tmp;
        cin >> input;
        tmp.second = input;
        cin >> input;
        if (input.size() == 1)
            input = "0" + input;
        tmp.first = input;
        cin >> input;
        if (input.size() == 1)
            input = "0" + input;
        tmp.first = input + tmp.first;
        cin >> input;
        tmp.first = input + tmp.first;
        // cout << tmp.first << ',' << tmp.second << '\n';
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    cout << v[N - 1].second << '\n';
    cout << v[0].second << '\n';

    return 0;
}