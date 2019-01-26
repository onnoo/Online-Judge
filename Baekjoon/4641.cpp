#include <iostream>
#include <set>
#include <string>
#include <cstring>

using namespace std;

int main(void)
{
    int count;
    char *cp;
    string str;
    set<int> s;
    getline(cin, str);
    while (str != "-1")
    {
        count = 0;
        cp = strtok(&str[0], " ");
        while (cp != nullptr)
        {
            s.insert(stoi(cp));
            cp = strtok(nullptr, " ");
        }
        s.erase(0);
        for (auto it = s.begin(); it != s.end(); ++it)
            if (s.find(*it * 2) != s.end())
                count++;
        cout << count << '\n';
        s.clear();
        getline(cin, str);
    }

    return 0;
}