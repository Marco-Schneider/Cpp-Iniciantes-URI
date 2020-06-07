//URI Online Jugde - Iniciantes 1156

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int i;
    double S = 1.00;

    for(i = 1; i <= 19; i++)
    {
        S = S + (2*i + 1)/double (pow(2, i));
    }

    cout << setprecision(2) << fixed << S << endl;

    return 0;
}