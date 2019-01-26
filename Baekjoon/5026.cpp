#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    while (N--)
    {
        string s;
        cin >> s;
        if (s == "P=NP")
            cout << "skipped\n";
        else
        {
            char *cp = strtok(&s[0], "+");
            int sum = 0;
            sum += stoi(cp);
            cp = strtok(nullptr, "+");
            sum += stoi(cp);
            cout << sum << '\n';
        }
    }

    return 0;
}