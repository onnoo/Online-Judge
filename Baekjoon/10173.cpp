#include <iostream>
#include <string>
#include <cctype>

using namespace std;

typedef long long ll;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    getline(cin, s);
    while (s != "EOI")
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << (s.find("NEMO") != string::npos ? "Found\n" : "Missing\n");
        getline(cin, s);
    }

    return 0;
}