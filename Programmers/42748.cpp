#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (auto c : commands) {
        vector<int> v;
        v.assign(array.begin() + (c[0] - 1), array.begin() + c[1]);
        sort(v.begin(), v.end(), less<int>());
        answer.push_back(v[c[2] - 1]);
    }
    
    return answer;
}