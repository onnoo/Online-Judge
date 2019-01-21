#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    vector<int> v;
    int N, tmp, count = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }

    make_heap(v.begin(), v.end(), greater<int>());

    while (v.size() != 1)
    {
        tmp = v.front();
        pop_heap(v.begin(), v.end(), greater<int>());
        v.pop_back();
        tmp += v.front();
        pop_heap(v.begin(), v.end(), greater<int>());
        v.pop_back();
        count += tmp;
        v.push_back(tmp);
        push_heap(v.begin(), v.end(), greater<int>());
    }
    cout << count << '\n';

    return 0;
}