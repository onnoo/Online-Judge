#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string name;
    int age, weight;
    cin >> name >> age >> weight;
    while (!(name == "#" && !age && !weight))
    {
        cout << name << ' ' << (age > 17 || weight >= 80 ? "Senior" : "Junior")
             << '\n';
        cin >> name >> age >> weight;
    }

    return 0;
}