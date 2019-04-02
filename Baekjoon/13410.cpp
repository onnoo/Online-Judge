#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K, tmp = 0;
    vector<int> v;
    string s;

    cin >> N >> K;
    for (int i = 1; i <= K; i++)
    {
        s = to_string(tmp += N);
        reverse(s.begin(), s.end());
        v.push_back(stoi(s));
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << v[0] << '\n';

    return 0;
}
