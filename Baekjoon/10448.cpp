#include <iostream>
#include <vector>
using namespace std;

bool chk[1001];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // 1000 이하의 삼각수 구하기
    vector<int> v;
    for (int i = 1, num = 0; num <= 1000; i++)
    {
        num += i;
        if (num > 1000)
            break;
        v.push_back(num);
    }

    // 모든 조합 구하기
    int sum, sz = v.size();
    for (int i = 0; i < sz; i++)
    {
        for (int j = i; j < sz; j++)
        {
            for (int k = j; k < sz; k++)
            {
                sum = v[i] + v[j] + v[k];
                if (sum <= 1000)
                {
                    chk[sum] = true;
                }
                else
                {
                    break;
                }
            }
        }
    }

    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        cout << chk[N] << '\n';
    }

    return 0;
}