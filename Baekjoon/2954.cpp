#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char vowel[6] = "aeiou";
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
        for (int j = 0; j < 5; j++)
            if (s[i] == vowel[j])
            {
                i += 2;
                break;
            }
    }
    cout << '\n';

    return 0;
}