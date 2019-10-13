#include <iostream>
#include <string>

using namespace std;

char mapping[125];
int a[] = {46, 79, 45, 124, 47, 92, 94, 60, 118, 62};
char b[] = {'.', 'O', '|', '-', '\\', '/', '<', 'v', '>', '^'};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    cin.ignore();

    for (int i = 0; i < 10; i++)
        mapping[a[i]] = b[i];

    char arr[N][M + 1];
    for (int i = 0; i < N; i++)
    {
        cin.getline(arr[i], M + 1);
    }

    for (int j = M - 1; j >= 0; j--)
    {
        for (int i = 0; i < N; i++)
        {
            cout << mapping[arr[i][j]];
        }
        cout << '\n';
    }

    return 0;
}