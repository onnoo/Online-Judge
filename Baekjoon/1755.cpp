#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

string num[10] = {
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine"};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int M, N;
    cin >> M >> N;

    vector<pair<string, int>> v;
    for (int i = M; i <= N; i++)
    {
        string s = "";
        if (i >= 10)
        {
            s = num[i / 10] + ' ';
        }
        s = s + num[i % 10];
        v.push_back(make_pair(s, i));
    }

    sort(v.begin(), v.end());

    for (int i = 1; i <= v.size(); i++)
    {
        cout << v[i - 1].second << ' ';
        if (!(i % 10))
            cout << '\n';
    }

    return 0;
}