#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    for (char c : s)
    {
        answer = answer && '0' <= c && c <= '9';
    }
    answer = answer && (s.size() == 4 || s.size() == 6);
    return answer;
}