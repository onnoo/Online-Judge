#include <iostream>

using namespace std;

typedef long long ll;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int N, num, a, b;
    cin >> N;
    ll* arr = (ll*)calloc(21, sizeof(ll));
    ll* tmp;

    cin >> num;
    arr[num] = 1;
    for (int i = 1; i < N - 1; i++)
    {
        tmp = (ll*)calloc(21, sizeof(ll));
        cin >> num;
        for (int j = 0; j <= 20; j++)
        {
            a = j + num;
            b = j - num;
            tmp[a] += (a <= 20 ? arr[j] : 0);
            tmp[b] += (b >= 0 ? arr[j] : 0);
        }
        free(arr);
        arr = tmp;
    }
    cin >> num;
    cout << arr[num] << '\n';

    return 0;
}