//URI Online Judge - Iniciantes 1158

#include <iostream>

using namespace std;

int main()
{
    int N; //Quantidade de casos de teste
    int X, Y; //Intervalo: soma de Y ímpares consecutivos incluindo X
    int soma;

    cin >> N;

    for(int i=0; i<N; i++)
    {
        soma = 0;
        cin >> X >> Y;

        for(int j=0; j<(Y*2); j++)
        {
            if(X % 2 != 0)
            {
                soma = soma + X;
            }
            X++;
        }
        cout << soma << endl;
    }

    return 0;
}