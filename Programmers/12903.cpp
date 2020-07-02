#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = int(s.size() / 2);
    answer += s[idx];

    if (s.size() % 2 == 0)
    {
        answer = s[idx - 1] + answer;
    }
    return answer;
}