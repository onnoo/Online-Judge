#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int gandalf[6] = {1, 2, 3, 3, 4, 10};
    int sauron[7] = {1, 2, 2, 2, 3, 5, 10};
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int G = 0, S = 0, tmp;
        for (int i = 0; i < 6; i++)
        {
            cin >> tmp;
            G += tmp * gandalf[i];
        }
        for (int i = 0; i < 7; i++)
        {
            cin >> tmp;
            S += tmp * sauron[i];
        }
        cout << "Battle " << t << ": ";
        if (G > S)
            cout << "Good triumphs over Evil\n";
        else if (S > G)
            cout << "Evil eradicates all trace of Good\n";
        else
            cout << "No victor on this battle field\n";
    }

    return 0;
}