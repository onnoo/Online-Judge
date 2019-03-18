#include <iostream>
#include <queue>
#include <string>

using namespace std;

queue<string> q;
bool include[10];

void gen(int idx, string num)
{
    if (idx == 3)
    {
        q.push(num);
    }
    else
    {
        for (int i = 1; i < 10; i++)
        {
            if (include[i])
                continue;
            include[i] = true;
            gen(idx + 1, num + (char)(i + 48));
            include[i] = false;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    gen(0, "");

    string s, tmp;
    int N, str, bal, sz, tmp_str, tmp_bal;
    cin >> N;
    while (N--)
    {
        cin >> s >> str >> bal;
        sz = q.size();
        for (int i = 0; i < sz; i++)
        {
            tmp = q.front();
            tmp_str = 0;
            tmp_bal = 0;
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (tmp[j] == s[k])
                    {
                        if (j == k)
                            tmp_str++;
                        else
                            tmp_bal++;
                    }
                }
            }
            if (tmp_str == str && tmp_bal == bal)
                q.push(tmp);
            q.pop();
        }
    }

    cout << q.size() << '\n';

    return 0;
}