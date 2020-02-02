//URI Online Judge - Iniciantes - 1113

#include <iostream>

using namespace std;

int main()
{

    int X, Y;

    cin >> X >> Y;

    while(X != Y)
    {
        if(Y>X)
            cout << "Crescente" << endl;
        else
            cout << "Decrescente" << endl;

        cin >> X >> Y;
    }

    return 0;
}
