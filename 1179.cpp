//URI Online Judge - Iniciantes 1179

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> par(5);
    vector<int> impar(5);
    int iPar = 0 , iImpar = 0, X;

    for(int i=0; i<15; i++)
    {
        cin >> X;
        if(X % 2 == 0) //Par
        {
            par[iPar] = X;
            iPar++;
        }
        else //Impar
        {
            impar[iImpar] = X;
            iImpar++;
        }

        if(iPar == 5) //Vetor de pares cheio
        {
            for(int j=0; j<5; j++)
            {
                cout << "par[" << j << "] = " << par[j] << endl;
            }
            iPar = 0;
        }
        if(iImpar == 5) //Vetor de ímpares cheio
        {
            for(int j=0; j<5; j++)
            {
                cout << "impar[" << j << "] = " << impar[j] << endl;
            }
            iImpar = 0;
        }
    }

    //Terminada a leitura, imprimir o que resta nos vetores
    //Iniciando pelo vetor dos ímpares
    for(int i=0; i<iImpar; i++)
    {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }
    for(int i=0; i<iPar; i++)
    {
        cout << "par[" << i << "] = " << par[i] << endl;
    }

    return 0;
}