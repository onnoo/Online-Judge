#include <iostream>
#include <random>

using namespace std;

#define num -8140 + (rand() % 16280)

int main(void)
{
    for (int i = 0; i < 814; i++)
        cout << num << ' ' << num << '\n';
    
    return 0;
}
