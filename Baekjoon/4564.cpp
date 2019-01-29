#include <iostream>
#include <string>

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
        while (N / 10)
        {
            cout << N << ' ';
            string sub = to_string(N);
            int num = 1;
            for (int i = 0; i < sub.size(); i++)
                num *= sub[i] - 48;
            N = num;
        }
        cout << N << '\n';
        cin >> N;
    }

    return 0;
}