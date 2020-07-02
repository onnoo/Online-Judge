#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> sel[3] = {{1, 2, 3, 4, 5},
                          {2, 1, 2, 3, 2, 4, 2, 5},
                          {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};
    int correct[3] = {0, 0, 0};
    int max = 0;
    
    for (int i = 0; i < answers.size(); i++) {
        for (int j = 0; j < 3; j++) {
            if (answers[i] == sel[j][i % sel[j].size()])
            {
                correct[j]++;
                if (max < correct[j])
                    max = correct[j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (correct[i] == max)
        {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}