//URI Online Judge - Iniciantes - 1097

#include <iostream>

using namespace std;

int main()
{
    int I = 1, J;
    int i;

    while(I<=9)
    {
        J = I + 6;
        for(i=0; i<3; i++)
        {
            cout << "I=" << I << " J=" << J << endl;
            J -= 1;
        }
        I += 2;
    }

    return 0;
}
