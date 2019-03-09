#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    string s;
    cin >> N;
    int arr[N][N];
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = (s[j] <= '9' ? s[j] - 48 : s[j] - 'A' + 10);
        }
    }

    bool is_latin = true;
    bool *chk;
    for (int i = 0; i < N; i++)
    {
        chk = (bool *)calloc(N, sizeof(bool));
        for (int j = 0; j < N; j++)
        {
            if (!chk[arr[i][j]])
                chk[arr[i][j]] = true;
            else
                is_latin = false;
        }
        free(chk);
    }

    for (int i = 0; i < N; i++)
    {
        chk = (bool *)calloc(N, sizeof(bool));
        for (int j = 0; j < N; j++)
        {
            if (!chk[arr[j][i]])
                chk[arr[j][i]] = true;
            else
                is_latin = false;
        }
        free(chk);
    }

    if (is_latin)
    {
        bool is_reduced = true;
        for (int i = 0; i < N; i++)
        {
            if (arr[0][i] != i)
                is_reduced = false;
        }
        for (int i = 0; i < N; i++)
        {
            if (arr[i][0] != i)
                is_reduced = false;
        }
        cout << (is_reduced ? "Reduced" : "Not Reduced") << '\n';
    }
    else
        cout << "No\n";

    return 0;
}