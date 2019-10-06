#include <iostream>
#include <utility>
#include <queue>
#include <string>

using namespace std;

int cnt = 0;
queue<pair<int, int>> q;

string mul(string a, string b)
{
    string ret = "";
    int carry = 0, val1, val2, res;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        val1 = a[i] - '0';
        val2 = 2;

        res = val1 * val2 + carry;
        ret = (char)(res % 10 + '0') + ret;
        carry = res / 10;
    }
    if (carry != 0)
        ret = (char)(carry + '0') + ret;
    return ret;
}

void hanoi(int src, int dst, int tmp, int height)
{
    if (height == 1)
    {
        q.push(make_pair(src, dst));
        cnt++;
    }
    else
    {
        hanoi(src, tmp, dst, height - 1);
        hanoi(src, dst, tmp, 1);
        hanoi(tmp, dst, src, height - 1);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int K;
    cin >> K;

    if (K <= 20)
    {
        hanoi(1, 3, 2, K);
        cout << cnt << '\n';
        pair<int, int> p;
        while (!q.empty())
        {
            p = q.front();
            cout << p.first << ' ' << p.second << '\n';
            q.pop();
        }    
    }
    else
    {
        string num = "2";
        int power = 1;
        while (power < K)
        {
            power = power + 1;
            num = mul(num, "2");
        }
        num.back() = num.back() - 1;
        cout << num << '\n';
    }

    return 0;
}