#include <iostream>
#include <map>
#include <utility>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    map<string, pair<double, string>> m;
    m.insert(make_pair(string("kg"), make_pair(2.2046, string("lb"))));
    m.insert(make_pair(string("lb"), make_pair(0.4536, string("kg"))));
    m.insert(make_pair(string("l"), make_pair(0.2642, string("g"))));
    m.insert(make_pair(string("g"), make_pair(3.7854, string("l"))));

    int N;
    cin >> N;
    while (N--)
    {
        string s;
        double tmp;
        cin >> tmp >> s;
        auto it = m.find(s);
        printf("%.4lf %s\n", it->second.first * tmp + 1e-9, it->second.second.c_str());
    }

    return 0;
}