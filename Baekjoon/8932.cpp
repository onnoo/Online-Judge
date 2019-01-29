#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double table[7][3] = {{9.23076, 26.7, 1.835},
                          {1.84523, 75, 1.348},
                          {56.0211, 1.5, 1.05},
                          {4.99087, 42.5, 1.81},
                          {0.188807, 210, 1.41},
                          {15.9803, 3.8, 1.04},
                          {0.11193, 254, 1.88}};

    int T;
    cin >> T;
    while (T--)
    {
        double score = 0, record;
        for (int i = 0; i < 7; i++)
        {
            cin >> record;
            score += floor(table[i][0] * pow(abs(record - table[i][1]), table[i][2]));
        }
        cout << score << '\n';
    }

    return 0;
}