#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    int cnt = 1;
    int left = 0;
    while (!v.empty())
    {
        left = max(v.back(), left);
        v.pop_back();
        cnt++;
        left--;
    }

    if (left >= 0)
        cnt += left;
    cout << cnt + 1 << '\n';

    return 0;
}