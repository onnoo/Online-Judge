#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int n = board.size();
    stack<int> s;
    
    for (auto m : moves)
    {
        for (int i = 0; i < n; i++)
        {
            if (board[i][m - 1])
            {
                if (!s.empty() && (s.top() == board[i][m - 1]))
                {
                    answer += 2;
                    s.pop();
                }
                else
                {
                    s.push(board[i][m - 1]);
                }
                board[i][m - 1] = 0;
                break;
            }
        }
    }

    return answer;
}