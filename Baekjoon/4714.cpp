#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    double N;
    cin >> N;
    cout << fixed;
    cout.precision(2);
    while (N >= 0)
    {
        cout << "Objects weighing ";
        cout << N << " on Earth will weigh ";
        cout << N * 0.167 << " on the moon.\n";
        cin >> N;
    }

    return 0;
}