#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<bool> v;
    v.assign(10000, true);

    v[0] = v[1] = false;
    for (int i = 2; i <= 9999; i++)
        if (v[i] == true)
            for (int j = i + i; j <= 9999; j += i)
                v[j] = false;
    
    int T, n, tries, sz;
    string src, dest, tmp, poped;
    bool stop;
    cin >> T;
    while (T--)
    {
        vector<bool> check(10000);
        queue<string> q;

        cin >> src >> dest;
        q.push(src);

        tries = 0;
        stop = src == dest;

        while (!q.empty() && !stop)
        {
            sz = q.size();
            for (int t = 0; t < sz; t++)
            {
                poped = q.front();
                q.pop();
                for (int i = 0; i < 4; i++)
                {
                    for (int j = 0; j <= 9; j++)
                    {
                        tmp = poped;
                        tmp[i] = '0' + j;
                        n = stoi(tmp);
                        if (n >= 1000 && check[n] == false && v[n] == true)
                        {
                            if (tmp == dest && stop == false)
                            {
                                stop = true;
                            }
                            check[n] = true;
                            q.push(tmp);
                        }
                    }
                }
            }
            tries++;
        }
        cout << (stop ? to_string(tries) : "Impossible") << '\n';
    }

    return 0;
}