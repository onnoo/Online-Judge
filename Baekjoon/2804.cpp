#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string A, B;
    cin >> A >> B;

    int row, col;
    bool flag = true;

    for (col = 0; col < A.size() && flag; col++)
    {
        for (row = 0; row < B.size() && flag; row++)
        {
            if (B[row] == A[col])
            {
                flag = false;
                row--;
                col--;
            }
        }
    }
    for (int i = 0; i < B.size(); i++)
    {
        for (int j = 0; j < A.size(); j++)
        {
            if (i == row)
                cout << A[j];
            else if (j == col)
                cout << B[i];
            else
                cout << '.';
        }
        cout << '\n';
    }

    return 0;
}