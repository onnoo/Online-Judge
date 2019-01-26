#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    int arr[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
    string A, B;
    cin >> A >> B;
    vector<int> v, tmp1, tmp2;
    for (int i = 0; i < A.size(); i++)
    {
        v.push_back(arr[A[i] - 65]);
        v.push_back(arr[B[i] - 65]);
    }

    while (v.size() > 2)
    {
        tmp1.assign(v.begin(), v.end());
        tmp2.clear();
        for (int i = 0; i < tmp1.size() - 1; i++)
            tmp2.push_back((tmp1[i] + tmp1[i + 1]) % 10);
        v.assign(tmp2.begin(), tmp2.end());
    }
    cout << v[0] << v[1] << '\n';

    return 0;
}