#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string ans = "";
    double speed, weight, strength;
    cin >> speed >> weight >> strength;

    if (speed <= 4.5 && weight >= 150 && strength >= 200) {
        if (ans != "") {
            ans += " ";
        }
        ans += "Wide Receiver";
    }

    if (speed <= 6.0 && weight >= 300 && strength >= 500) {
        if (ans != "") {
            ans += " ";
        }
        ans += "Lineman";
    }

    if (speed <= 5.0 && weight >= 200 && strength >= 300) {
        if (ans != "") {
            ans += " ";
        }
        ans += "Quarterback";
    }

    if (ans == "") {
        ans = "No positions";
    }
    
    cout << ans << '\n';

    return 0;
}