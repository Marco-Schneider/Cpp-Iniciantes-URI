//URI Online Judge - Iniciantes - 1080

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vetor(100);
    int maior = 0, i;

    //Construção do vetor
    for(i=0; i<100; i++)
    {
        cin >> vetor[i];
    }

    //Análise do maior elemento
    for(i=0; i<100; i++)
    {
        if(vetor[i]>maior)
            maior = vetor[i];
    }

    //Analisando a posição
    for(i=0; i<100; i++)
    {
        if(vetor[i] == maior)
            cout << maior << endl << i+1 << endl;
    }

    return 0;
}
