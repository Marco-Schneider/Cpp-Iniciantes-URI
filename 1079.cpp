//URI Online Judge - Iniciantes - 1079

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int N; //Quantidade de casos de teste
    vector<float> vetor(3);

    cin >> N;

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<3; j++) //Entrando com os três valores
        {
            cin >> vetor[j];
        }
        //Procedendo com o cálculo da média
        cout << setprecision(1) << fixed << (2*vetor[0] + 3*vetor[1] + 5*vetor[2])/10.0 << endl;
    }

    return 0;
}
