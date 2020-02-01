//URI Online Judge - Iniciantes - 1098

#include <iostream>

using namespace std;

int main()
{
    float I = 0, J;
    int i;

    while(I<=2.1)
    {
        for(i=1; i<=3; i++)
        {
            J = I + i;
            cout << "I=" << I << " J=" << J << endl;
        }
        I += 0.2;
    }


    return 0;
}
