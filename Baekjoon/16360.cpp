#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    double sum = 0;
    string score;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> score;
        for (int j = 0; j < score.size(); j++)
            if (score[j] == '0' || score[j] == '6')
                score[j] = '9';
        int tmp = stoi(score.c_str());
        if (tmp > 100)
            tmp = 100;
        sum += tmp;
    }
    printf("%.0lf\n", sum / N + 1e-9);
    return 0;
}