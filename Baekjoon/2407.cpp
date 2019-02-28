#include <iostream>
#include <string>

using namespace std;

string dp[101][101];

string add(string a, string b)
{
    string ret = "";
    int carry = 0;
    for (int i = 0; i < a.size() || i < b.size(); i++)
    {
        int tmp = (i < a.size() ? a[a.size() - i - 1] - 48 : 0) + (i < b.size() ? b[b.size() - i - 1] - 48 : 0) + carry;
        if (tmp >= 10)
        {
            tmp -= 10;
            carry = 1;
        }
        else
            carry = 0;
        ret = (char)(tmp + 48) + ret;
    }
    if (carry == 1)
        ret = "1" + ret;
    return ret;
}

string combination(int N, int M)
{
    if (dp[N][M] != "")
        return dp[N][M];
    if (M == 0 || N == M)
        return dp[N][M] = "1";
    else
        return dp[N][M] = add(combination(N - 1, M - 1), combination(N - 1, M));
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    cout << combination(N, M) << '\n';

    return 0;
}