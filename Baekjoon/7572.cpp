#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string A = "LABCDEFGHIJK";
    string B = "9012345678";
    int N;
    cin >> N;

    cout << A[(60 + N - 3) % 12] << B[(60 + N - 3) % 10] << '\n';

    return 0;
}