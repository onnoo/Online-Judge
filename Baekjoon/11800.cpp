#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string word[] = {"Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};
string word_same[] = {"Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, A, B;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        cin >> A >> B;
        cout << "Case " << t << ": ";
        if (A == B)
        {
            cout << word_same[A - 1] << '\n';
        }
        else
        {
            string ans = "";
            ans += word[max(A, B) - 1];
            ans += ' ';
            ans += word[min(A, B) - 1];
            cout << (ans == "Sheesh Bang" ? "Sheesh Beesh" : ans) << '\n';
        }
    }

    return 0;
}