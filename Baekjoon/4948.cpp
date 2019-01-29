#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    while (N > 0)
    {
        int cnt = 0;
        bool *eratos = (bool *)calloc(2 * N + 1, sizeof(bool));
        eratos[1] = true;
        for (int i = 1; i <= 2 * N; i++)
        {
            if (!eratos[i])
            {
                if (i > N)
                    cnt++;
                for (int j = i; j <= 2 * N; j += i)
                    eratos[j] = true;
            }
        }
        cout << cnt << '\n';
        free(eratos);
        cin >> N;
    }
    return 0;
}