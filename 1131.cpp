//URI Online Judge - Iniciantes - 1131

#include <iostream>

using namespace std;

int main()
{
    int GolInter, GolGremio;
    int VitoriaInter = 0, VitoriaGremio = 0, Empate = 0, Grenais = 0;
    int aux = 1;

    while(aux==1)
    {
        cin >> GolInter >> GolGremio;
        Grenais += 1;

        if(GolInter > GolGremio) //Vitória do Internacional
            VitoriaInter += 1;
        else if(GolInter < GolGremio) //Vitória do Grêmio
            VitoriaGremio += 1;
        else //Empate
            Empate += 1;

        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> aux;
    }

    cout << Grenais << " grenais\n";
    cout << "Inter:" << VitoriaInter << endl;
    cout << "Gremio:" << VitoriaGremio << endl;
    cout << "Empates:" << Empate << endl;

    if(VitoriaInter>VitoriaGremio)
        cout << "Inter venceu mais\n";
    else if(VitoriaInter<VitoriaGremio)
        cout << "Gremio venceu mais\n";
    else
        cout << "Nao houve vencedor\n";

    return 0;
}
