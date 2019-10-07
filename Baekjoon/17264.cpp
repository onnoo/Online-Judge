#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N, P, W, L, G;
    cin >> N >> P >> W >> L >> G;

    map<string, bool> m;
    string player;
    char is_win;

    for (int i = 0; i < P; i++)
    {
        cin >> player >> is_win;
        m[player] = (is_win == 'W');
    }

    int score = 0;
    bool goal = false;
    for (int i = 0; i < N; i++)
    {
        cin >> player;
        if (m[player])
            score += W;
        else
            score -= L;
        
        if (score < 0)
            score = 0;
        else if (score >= G)
        {
            goal = true;
        }
    }

    cout << (goal ? "I AM NOT IRONMAN!!" : "I AM IRONMAN!!") << '\n';

    return 0;
}