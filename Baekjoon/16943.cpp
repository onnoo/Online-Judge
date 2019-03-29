#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string A;
int B, ans = -1;
vector<int> num;
vector<bool> use;

void make_num(int idx, int val)
{
    if (idx == A.size())
    {
        if (ans < val && val < B)
            ans = val;
    }
    for (int i = 0; i < A.size(); i++)
    {
        if (use[i])
            continue;
        else
        {
            if (!idx && !num[i])
                continue;
            use[i] = true;
            make_num(idx + 1, val * 10 + num[i]);
            use[i] = false;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B;
    for (char c : A)
        num.push_back(c - 48);
    use.assign(A.size(), false);
    make_num(0, 0);

    cout << ans << '\n';
    return 0;
}