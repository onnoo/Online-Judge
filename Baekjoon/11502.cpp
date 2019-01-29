#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    bool arr[1201] = {0};
    for (int i = 2; i <= 1201; i++)
    {
        if (!arr[i])
        {
            v.push_back(i);
            for (int j = i; j <= 1200; j += i)
                arr[j] = true;
        }
    }

    int T;
    cin >> T;

    while (T--)
    {
        bool go = true;
        int N;
        cin >> N;
        for (int i = 0; v[i] < N - 4 && go; i++)
        {
            for (int j = i; v[j] < N && go; j++)
            {
                for (int k = j; v[k] < N && go; k++)
                {
                    if (v[i] + v[j] + v[k] == N)
                    {
                        go = false;
                        cout << v[i] << ' ' << v[j] << ' ' << v[k] << '\n';
                    }
                }
            }
        }
        if (go)
            cout << "0\n";
    }
    return 0;
}