//URI Online Judge - Iniciantes 1159

#include <iostream>

using namespace std;

int main()
{
    int X, aux;
    int soma;

    cin >> X;

    while(X != 0)
    {
        soma = 0;
        aux = X;
        for(int i=0; i<(5*2); i++)
        {
            if(aux % 2 == 0) //Par
            {
                soma = soma + aux;
            }
            aux++;
        }
        cout << soma << endl;
        cin >> X;
    }

    return 0;
}