//URI Online Judge - Iniciantes - 1118

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float Nota1, Nota2;
    int aux = 1;

    while(aux==1)
    {
        cin >> Nota1;
        while(Nota1<0.0 || Nota1>10.0)
        {
            cout << "nota invalida\n";
            cin >> Nota1;
        }

        cin >> Nota2;
        while(Nota2<0.0 || Nota2>10.0)
        {
            cout << "nota invalida\n";
            cin >> Nota2;
        }

        cout << "media = " << setprecision(2) << fixed << (Nota1 + Nota2)/2.0 << endl;
        cout << "novo calculo (1-sim 2-nao)\n";
        cin >> aux;
        while(aux>2 || aux<0)
        {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> aux;
        }
    }

    return 0;
}
