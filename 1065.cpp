//URI Online Judge - Iniciantes - 1065

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>vetor(5); //Declarando um vetor de inteiros de 5 elementos
    int pares = 0, i;

    for(i=0; i<5; i++)
    {
        cin >> vetor[i];
        if(vetor[i]%2 == 0) //Valor é par
        {
            pares = pares + 1;
        }
    }

    cout << pares << " valores pares\n";

    return 0;
}
