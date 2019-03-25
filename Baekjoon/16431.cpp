#include <iostream>
#include <cmath>

using namespace std;

typedef struct pos
{
    int x, y;
} pos;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    pos p[3];
    for (int i = 0; i < 3; i++)
        cin >> p[i].x >> p[i].y;

    int dist_D = abs(p[1].x - p[2].x) + abs(p[1].y - p[2].y);
    int dist_B = max(abs(p[0].x - p[2].x), abs(p[0].y - p[2].y));

    if (dist_B < dist_D)
        cout << "bessie\n";
    else if (dist_D < dist_B)
        cout << "daisy\n";
    else
        cout << "tie\n";

    return 0;
}