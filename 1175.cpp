//URI Online Judge - Iniciantes 1175

#include <iostream>
#include <vector>
#define TAM 20

using namespace std;

int main()
{
    vector<int> vetor(TAM); //Instanciado um vetor de inteiros com 20 elementos
    int i, j, aux;

    //Preenchendo o vetor
    for(i=0; i<TAM; i++)
    {
        cin >> vetor[i]; 
    }

    //Laço para espelhar o vetor
    j = (TAM-1);
    for(i=0; i<(TAM/2); i++)
    {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
        j--;
    }

    //Checando o preenchimento
    for(i=0; i<TAM; i++)
    {
        cout << "N["<< i << "] = " << vetor[i] << endl;
    }

    return 0;
}