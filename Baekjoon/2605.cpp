#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> v;
    int N, tmp;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> tmp;
        v.insert(v.end() - tmp, i);
    }

    for (int i : v)
        cout << i << ' ';

    cout << '\n';

    return 0;
}