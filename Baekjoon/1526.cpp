#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string N;
    cin >> N;

    bool check = false;
    while (!check)
    {
        bool res = true;
        for (int i = 0; i < N.size(); i++)
        {
            if (N[i] != '4' && N[i] != '7')
            {
                res = false;
            }
        }
        if (res)
            check = true;
        else
            N = to_string(stoi(N) - 1);
    }

    cout << N << endl;

    return 0;
}