#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> um;
    for (auto p : completion) {
        um[p]++;
    }

    for (auto p : participant) {
        if (um[p] == 0)
        {
            answer = p;
        }
        else
        {
            um[p]--;
        }
    }

    return answer;
}