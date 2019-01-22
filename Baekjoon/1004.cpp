#include <iostream>
#include <cmath>

using namespace std;
int distance(int x1, int y1, int x2, int y2)
{
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int x1, y1, x2, y2, count = 0;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        // 출발점에서 도착점 사이의 거리
        int d0 = distance(x1, y1, x2, y2);
        int N;
        scanf("%d", &N);
        for (int i = 0; i < N; i++)
        {
            int cx, cy, r;
            scanf("%d %d %d", &cx, &cy, &r);
            if (distance(x1, y1, cx, cy) < r * r)
            { // 출발점이 원 안에 있을 경우
                if (distance(x2, y2, cx, cy) > r * r)
                    count++;
            }
            else if (distance(x2, y2, cx, cy) < r * r)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}