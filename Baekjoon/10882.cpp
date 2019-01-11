#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void timeset(int HH, int MM, double D)
{
    string ret = "";
    if (D > 0)
    {
        if (D - floor(D) == 0.5)
        {
            MM += 30;
            if (MM > 60)
            {
                MM -= 60;
                HH++;
            }
        }
        HH += floor(D);
        if (HH >= 24)
            HH -= 24;
    }
    else
    {
        if (D - floor(D) == 0.5)
        {
            MM -= 30;
            if (MM < 0)
            {
                MM += 60;
                HH--;
            }
        }
        HH += ceil(D);
        if (HH < 0)
            HH += 24;
    }
    printf("%02d:%02d\n", HH, MM);
}

int main(void)
{
    int N;
    scanf("%d", &N);

    int UTC_HH, UTC_MM;
    double D;
    scanf("%d:%d UTC%lf", &UTC_HH, &UTC_MM, &D);

    if (D > 0)
    {
        if (D - floor(D) == 0.5)
        {
            UTC_MM -= 30;
            if (UTC_MM < 0)
            {
                UTC_MM += 60;
                UTC_HH--;
            }
        }
        UTC_HH -= floor(D);
        if (UTC_HH < 0)
            UTC_HH += 24;
    }
    else
    {
        if (D - floor(D) == 0.5)
        {
            UTC_MM += 30;
            if (UTC_MM >= 60)
            {
                UTC_MM -= 60;
                UTC_HH++;
            }
        }
        UTC_HH -= ceil(D);
        if (UTC_HH >= 24)
            UTC_HH -= 24;
    }

    for (int i = 0; i < N; i++)
    {
        double td;
        scanf("\nUTC%lf", &td);
        timeset(UTC_HH, UTC_MM, td);
    }
    return 0;
}