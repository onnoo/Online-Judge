#include <iostream>

using namespace std;

bool A_win_B(char a, char b)
{
    return (a == 'S' && b == 'P') || (a == 'R' && b == 'S') || (a == 'P' && b == 'R');
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char ML, MR, TL, TR;
    cin >> ML >> MR >> TL >> TR;

    bool Mwin = (A_win_B(ML, TL) && A_win_B(ML, TR)) || (A_win_B(MR, TL) && A_win_B(MR, TR));
    bool Twin = (A_win_B(TL, ML) && A_win_B(TL, MR)) || (A_win_B(TR, ML) && A_win_B(TR, MR));

    if (Mwin)
        cout << "MS\n";
    else if (Twin)
        cout << "TK\n";
    else
        cout << "?\n";

    return 0;
}