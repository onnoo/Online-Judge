#include <iostream>

using namespace std;

int num[] = {3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    
    char a[N + 1], b[M + 1];
    int arr[N + M];
    cin >> a >> b;

    int index_a = 0, index_b = 0;
    for (int i = 0; i < N + M;)
    {
        if (a[index_a])
        {
            arr[i] = (num[a[index_a] - 'A']);
            index_a++;
            i++;
        }
        if (b[index_b])
        {
            arr[i] = (num[b[index_b] - 'A']);
            index_b++;
            i++;
        }
    }

    for (int t = 1; t < N + M - 1; t++)
    {
        for (int i = 0; i < N + M - t; i++)
        {
            arr[i] = (arr[i] + arr[i + 1]) % 10;
        }
    }

    cout << (arr[0] * 10 + arr[1]) << "%\n";

    return 0;
}