#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<string> v;
    string s;
    int N, M, i = 1;
    cin >> N;
    while (N != 0)
    {
        cin.ignore();
        v.clear();
        for (int i = 0; i < N; i++)
        {
            getline(cin, s);
            v.push_back(s);
        }
        sort(v.begin(), v.end());

        cout << i++ << '\n';
        for (string s : v)
            cout << s << '\n';
        cin >> N;
    }

    return 0;
}