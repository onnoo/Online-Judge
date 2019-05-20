#include <iostream>

using namespace std;

char buf[26];
char tmp[26];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    char P;

    char cmd;

    cin >> N >> buf;

    while (N--)
    {
        cin >> cmd;

        switch (cmd)
        {
        case 'E':
            for (int i = 0; i < 26; i++)
            {
                switch (buf[i])
                {
                case 'S':
                    buf[i] = 'C';
                    break;
                case 'C':
                    buf[i] = 'S';
                    break;
                case 'D':
                    buf[i] = 'H';
                    break;
                case 'H':
                    buf[i] = 'D';
                    break;
                }
            }
            break;
        case 'R':
            for (int i = 0; i < 26; i++)
            {
                switch (buf[i])
                {
                case 'S':
                    buf[i] = 'H';
                    break;
                case 'H':
                    buf[i] = 'S';
                    break;
                case 'C':
                    buf[i] = 'D';
                    break;
                case 'D':
                    buf[i] = 'C';
                    break;
                }
            }
            break;
        case 'G':
            cin >> M;
            for (int i = 0; i < 26; i++)
            {
                tmp[i] = buf[(i + 26 - M) % 26];
            }
            for (int i = 0; i < 26; i++)
            {
                buf[i] = tmp[i];
            }
            break;
        case 'T':
            cin >> M >> P;
            buf[M - 1] = P;
            break;
        case 'A':
            cout << buf << '\n';
            break;
        }
    }

    return 0;
}