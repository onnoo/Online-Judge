#include <iostream>
#include <string>

#define _USE_MATH_DEFINES

using namespace std;

string m;

bool word_of(string w)
{
    int idx = 0;
    for (int i = 0; w[i] && m[idx]; i++)
    {
        if (w[i] == m[idx])
            idx++;
    }
    return !m[idx];
}

double degree(string w, double n)
{
    return n / (w.size() - m.size());
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> m >> N;

    string ans = "";
    double max = -1;
    while (N--)
    {
        string w;
        double g;
        cin >> w >> g;
        if (word_of(w) && max < degree(w, g))
        {
            max = degree(w, g);
            ans = w;
        }
        // cout << degree(w, g) << '\n';
    }

    cout << (ans == "" ? "No Jam" : ans) << '\n';

    return 0;
}