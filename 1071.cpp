//URI Online Judge - Iniciantes 1071

#include <iostream>

using namespace std;

int main()
{
    int X, Y;
    int SomaImpares = 0, i;

    cin >> X >> Y;


    //Primeiro, checar qual é o limite inferior, encontrar o menor número
    if(X<Y)
    {
        for(i=X+1; i<Y; i++)
        {
            if(i % 2 != 0)
                SomaImpares =  SomaImpares + i;
        }
    }
    else
    {
        for(i=Y+1; i<X; i++)
        {
            if(i % 2 != 0)
                SomaImpares =  SomaImpares + i;
        }
    }

    cout << SomaImpares << endl;

    return 0;
}
