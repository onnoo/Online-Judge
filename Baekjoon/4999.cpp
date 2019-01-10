#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string possible_ah, doctor_ah;
    cin >> possible_ah;
    cin >> doctor_ah;

    if (possible_ah.size() >= doctor_ah.size())
        printf("go\n");
    else
        printf("no\n");

    return 0;
}