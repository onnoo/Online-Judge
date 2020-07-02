#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    long long len = (b - a + 1);
    if (len % 2 == 0)
    {
        answer = (a + b) * (len / 2);
    }
    else
    {
        answer = (a + b) * len / 2;
    }
    return answer;
}