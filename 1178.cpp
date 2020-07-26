//URI Online Judge - Iniciantes 1178

#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#define TAM 100

using namespace std;

int main()
{
    vector<long double> N(TAM);
    long double X;

    cin >> X;

    for(int i=0; i<TAM; i++)
    {
        N[i] = X/(pow(2, i));
        cout << "N[" << i << "] = " << setprecision(4) << fixed <<  N[i] << endl;
    }

    return 0;
}