//URI Online Judge - Iniciantes 1160

#include <iostream>

using namespace std;

int main()
{
    int T; //Quantidade de casos de teste
    int anos; //Tempo até a população da cidade A ultrapassar a da cidade B
    int PA, PB; //População da cidade A e população da cidade B respectivamente
    double G1, G2; //Crescimento percentual de A e B respectivamente

    cin >> T;

    for(int i=0; i<T; i++)
    {
        anos = 0;
        cin >> PA >> PB >> G1 >> G2;
        while(PA <= PB)
        {
            PA = PA*(1+(G1/100));
            PB = PB*(1+(G2/100));
            anos++;
            if(anos == 101)
            {
                break;
            }
        }
        if(anos == 101)
        {
            cout << "Mais de 1 seculo.\n";
        }
        else
        {
            cout << anos << " anos.\n";
        }
        
    }

    return 0;
}