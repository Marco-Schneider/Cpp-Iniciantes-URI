//URI Online Judge - Iniciantes 1177

#include <iostream>
#include <vector>
#define TAM 1000

using namespace std;

int main()
{
    vector<int> N(TAM); //Instanciando o vetor N
    int T, aux = 0;
    
    cin >> T;

    for(int i=0; i<TAM; i++)
    {
        N[i] = aux;
        aux++;
        if(aux == T)
        {
            aux = 0;
        }
    }

    //Imprimindo o vetor N
    for(int i=0; i<TAM; i++)
    {
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}