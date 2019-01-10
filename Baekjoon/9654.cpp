#include <iostream>

using namespace std;

int main(void)
{
    printf("%-15s%-15s%-11s%-10s\n", "SHIP NAME", "CLASS", "DEPLOYMENT", "IN SERVICE");
    printf("%-15s%-15s%-11s%-10s\n", "N2 Bomber", "Heavy Fighter", "Limited", "21");
    printf("%-15s%-15s%-11s%-10s\n", "J-Type 327", "Light Combat", "Unlimited", "1");
    printf("%-15s%-15s%-11s%-10s\n", "NX Cruiser", "Medium Fighter", "Limited", "18");
    printf("%-15s%-15s%-11s%-10s\n", "N1 Starfighter", "Medium Fighter", "Unlimited", "25");
    printf("%-15s%-15s%-11s%-10s\n", "Royal Cruiser", "Light Combat", "Limited", "4");

    return 0;
}