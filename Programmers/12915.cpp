#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int idx;
int comp(string a, string b) {
    if (a[idx] == b[idx])
    {
        return a < b;
    }
    return a[idx] < b[idx];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    idx = n;
    sort(strings.begin(), strings.end(), comp);
    
    answer = strings;
    
    return answer;
}