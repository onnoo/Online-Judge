#include <iostream>
#include <string>

using namespace std;

string arr[] = {
    "sukhwan",
    "baby",
    "sukhwan",
    "tururu",
    "turu",
    "very",
    "cute",
    "tururu",
    "turu",
    "in",
    "bed",
    "tururu",
    "turu",
    "baby",
};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, add;
    cin >> N;

    add = N / 14;
    string s = arr[N % 14];

    if (s.find("ru") != string::npos)
    {
        if (s.find("ruru") != string::npos)
        {
            if (2 + add >= 5)
            {
                cout << "tu+ru*" << 2 + add << '\n';
            }
            else
            {
                while (add--)
                    s += "ru";
                cout << s << '\n';
            }
        }
        else
        {
            if (1 + add >= 5)
            {
                cout << "tu+ru*" << 1 + add << '\n';
            }
            else
            {
                while (add--)
                    s += "ru";
                cout << s << '\n';
            }
        }
    }
    else
        cout << s << '\n';

    return 0;
}