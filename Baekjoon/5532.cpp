#include <iostream>

using namespace std;

int main(void)
{
    int L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;
    int mat = B / D;
    int kor = A / C;
    if (B % D != 0)
        mat++;
    if (A % C != 0)
        kor++;
    if (mat > kor)
        cout << L - mat << '\n';
    else
        cout << L - kor << '\n';

    return 0;
}