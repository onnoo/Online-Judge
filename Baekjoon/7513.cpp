#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    int T;
    vector<string> v;
    string s;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        cout << "Scenario #" << t << ":\n";
        int M;
        cin >> M;
        while (M--)
        {
            cin >> s;
            v.push_back(s);
        }
        int N;
        cin >> N;
        while (N--)
        {
            int K;
            cin >> K;
            while (K--)
            {
                int tmp;
                cin >> tmp;
                cout << v[tmp];
            }
            cout << '\n';
        }
        cout << '\n';
        v.clear();
    }

    return 0;
}