#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector<string> v;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());
    cout << v[K - 1] << '\n';

    return 0;
}