#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int idx;
        cin >> idx;
        string str;
        cin >> str;
        cout << str.substr(0, idx - 1) << str.substr(idx, str.size() - idx) << endl;
    }

    return 0;
}