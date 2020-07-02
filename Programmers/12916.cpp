#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int cnt[2] = {0, 0};
    
    for(char c : s)
    {
        if (c == 'p' || c == 'P')
            cnt[0]++;
        if (c == 'y' || c == 'Y')
            cnt[1]++;
    }
    answer = cnt[0] == cnt[1];

    return answer;
}