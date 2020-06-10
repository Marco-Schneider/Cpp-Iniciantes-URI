//URI Online Judge - Iniciantes 1180

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int menor, posicao;
    int N;
    
    cin >> N;

    vector<int> X(N);

    //Lendo o vetor
    for(int i=0; i<N; i++)
    {
        cin >> X[i];
    }

    //Encontrando a menor posição e o menor valor
    menor = X[0];
    posicao = 0;
    for(int i=0; i<N; i++)
    {
        if(X[i] < menor)
        {
            menor = X[i];
            posicao = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;
    
    return 0;
}