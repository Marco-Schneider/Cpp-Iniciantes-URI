//URI Online Judge - Iniciantes - 1094

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char Animal;
    int N; //Quantidade de casos de teste
    int TotalCobaias = 0, TotalRatos = 0, TotalSapos = 0, TotalCoelhos = 0, Quantia;

    cin >> N;

    for(int i=0; i<N; i++)
    {
        cin >> Quantia >> Animal;
        if(Animal == 'R') //Ratos
        {
            TotalCobaias += Quantia;
            TotalRatos += Quantia;
        }
        else if(Animal == 'S') //Sapos
        {
            TotalCobaias += Quantia;
            TotalSapos += Quantia;
        }
        else //Coelhos
        {
            TotalCobaias += Quantia;
            TotalCoelhos += Quantia;
        }
    }

    //Relatório das informações coletadas
    cout << "Total: " << TotalCobaias << " cobaias\n";
    cout << "Total de coelhos: " << TotalCoelhos << endl;
    cout << "Total de ratos: " << TotalRatos << endl;
    cout << "Total de sapos: " << TotalSapos << endl;
    cout << "Percentual de coelhos: " << setprecision(2) << fixed << ((float)TotalCoelhos/(float)TotalCobaias)*100 << " %\n";
    cout << "Percentual de ratos: " << setprecision(2) << fixed << ((float)TotalRatos/(float)TotalCobaias)*100 << " %\n";
    cout << "Percentual de sapos: " << setprecision(2) << fixed << ((float)TotalSapos/(float)TotalCobaias)*100 << " %\n";

    return 0;
}
