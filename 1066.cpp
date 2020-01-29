//URI Online Judge - Iniciantes - 1066

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vetor;
    int pares = 0, impares = 0;
    int positivos = 0, negativos = 0;
    int aux, i;

    for(i=0; i<5; i++)
    {
        cin >> aux;
        vetor.push_back(aux);

        if(vetor[i]%2 == 0)
        {
            pares = pares + 1;
        }
        if(vetor[i]%2 != 0)
        {
            impares = impares + 1;
        }
        if(vetor[i]>0)
        {
            positivos = positivos + 1;
        }
        if(vetor[i]<0)
        {
            negativos = negativos + 1;
        }
    }

    cout << pares << " valor(es) par(es)\n";
    cout << impares << " valor(es) impar(es)\n";
    cout << positivos << " valor(es) positivo(s)\n";
    cout << negativos << " valor(es) negativo(s)\n";

    return 0;
}
