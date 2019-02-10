#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    bool arr[N][N];
    int h_bed = 0, v_bed = 0;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        int h = 0;

        for (int j = 0; j < N; j++)
        {
            arr[i][j] = (s[j] == '.');
            if (arr[i][j])
                h++;
            if ((!arr[i][j] || j == N - 1))
            {
                if (h >= 2)
                    h_bed++;
                h = 0;
            }
        }
    }

    for (int j = 0; j < N; j++)
    {
        int v = 0;
        for (int i = 0; i < N; i++)
        {
            if (arr[i][j])
                v++;
            if ((!arr[i][j]) || i == N - 1)
            {
                if (v >= 2)
                    v_bed++;
                v = 0;
            }
        }
    }
    cout << h_bed << ' ' << v_bed << '\n';

    return 0;
}