#include <iostream>
 
using namespace std;
 
struct Rect
{
    int x1;
    int y1;
    int x2;
    int y2;
};
 
 
int main(void) {
    Rect a, b;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
 
    bool is_overlap = (
        (a.x1 <= b.x2 && a.y1 <= b.y2) &&
        (b.x1 <= a.x2 && b.y1 <= a.y2)
    );
 
    if (!is_overlap) {
        cout << "none\n";
        return 0;
    }
 
    bool is_point = (
        (a.x1 == b.x2 && a.y2 == b.y1) ||
        (a.x2 == b.x1 && a.y2 == b.y1) ||
        (a.x2 == b.x1 && a.y1 == b.y2) ||
        (a.x1 == b.x2 && a.y1 == b.y2)
    );
 
    if (is_point) {
        cout << "point\n";
        return 0;
    }
 
    bool is_line = (
        (a.x2 == b.x1) ||
        (a.x1 == b.x2) ||
        (a.y2 == b.y1) ||
        (a.y1 == b.y2)
    );
 
    if (is_line) {
        cout << "line\n";
    } else {
        cout << "rectangle\n";
    }
 
    return 0;
}