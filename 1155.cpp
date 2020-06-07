//URI Online Judge - Iniciantes 1155

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    double S = 0;

    for(i=1; i<=100; i++)
    {
        S = S + 1/(double (i));
    }

    cout << setprecision(2) << fixed << S << endl;

    return 0;

}