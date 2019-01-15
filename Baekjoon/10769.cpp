#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int hap = 0, sad = 0;
    string s;
    getline(cin, s);

    if (s.size() > 2)
        for (int i = 0; i <= s.size() - 3; i++)
        {
            string sub = s.substr(i, 3);
            if (sub == ":-)")
                hap++;
            else if (sub == ":-(")
                sad++;
        }

    if (hap == 0 && sad == 0)
        cout << "none\n";
    else if (hap > sad)
        cout << "happy\n";
    else if (hap < sad)
        cout << "sad\n";
    else
        cout << "unsure\n";

    return 0;
}