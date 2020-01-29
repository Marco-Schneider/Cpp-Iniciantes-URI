//URI Online Judge - Iniciantes - 1064

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    vector <float> vetor(6); //Declarando um vetor do tipo float com 6 elementos
    float Soma_Positivos = 0;
    int positivos = 0, i;

    for(i=0; i<6; i++)
    {
        cin >> vetor[i];
        if(vetor[i]>0)
        {
            positivos = positivos + 1;
            Soma_Positivos = Soma_Positivos + vetor[i];
        }
    }

    cout << positivos << " valores positivos\n";
    cout << setprecision(1) << fixed << Soma_Positivos/positivos << endl;

    return 0;
}
