#include <iostream>
#include <string>
#include <algorithm>
#include <list>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, n, t;
    string s;
    list<pair<int, int>> post;
    
    cin >> N >> M;
    while (N--)
    {
        cin >> s;
        switch (s[0])
        {
        case 'o':
            cin >> n >> t;
            post.push_back(make_pair(t, n));
            break;
        case 's':
            post.sort();
            break;
        case 'c':
            cin >> n;
            auto it = post.begin();
            while((*it).second != n)
                ++it;
            post.erase(it);
            break;
        }
        if (post.empty())
            cout << "sleep";
        else
            for (auto p : post)
                cout << p.second << ' ';
        cout << '\n';
    }

    
    return 0;
}