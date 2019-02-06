#include <iostream>

using namespace std;

int money_A(int rank)
{
    if (rank == 0)
        return 0;

    int money = 0;
    if (rank == 1)
        money = 500;
    else if (rank <= 3)
        money = 300;
    else if (rank <= 6)
        money = 200;
    else if (rank <= 10)
        money = 50;
    else if (rank <= 15)
        money = 30;
    else if (rank <= 21)
        money = 10;
    return money * 10000;
}

int money_B(int rank)
{
    if (rank == 0)
        return 0;

    int money = 0;
    if (rank == 1)
        money = 512;
    else if (rank <= 3)
        money = 256;
    else if (rank <= 7)
        money = 128;
    else if (rank <= 15)
        money = 64;
    else if (rank <= 15)
        money = 30;
    else if (rank <= 31)
        money = 32;
    return money * 10000;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        cin >> A >> B;
        cout << money_A(A) + money_B(B) << '\n';
    }
    return 0;
}