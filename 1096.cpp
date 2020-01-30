//URI Online Judge - Iniciantes - 1096

#include <iostream>

using namespace std;

int main()
{
    int I = 1, J;

    while(I <= 9)
    {
        for(J=7; J>=5; J--)
        {
            cout << "I=" << I << " J=" << J << endl;
        }
        I += 2;
    }

    return 0;
}
