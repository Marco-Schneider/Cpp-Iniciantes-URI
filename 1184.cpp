//URI Online Judge - Iniciantes 1184

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double matriz[12][12];
    double soma;
    int n;
    char operation; //Caractere que definirá a operação a ser realizada

    cin >> operation;

    for(int i=0; i<12; i++) //Preenchimento da matriz
    {
        for(int j=0; j<12; j++)
        {
            cin >> matriz[i][j];
        }
    }

    soma = 0;
    n = 0;
    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            if(j > i) //Coluna > Linha
            {
                soma = soma + matriz[i][j];
                n++;
            }
        }
    }

    if(operation == 'S')
    {
        cout << setprecision(1) << fixed << double (soma) << endl;
    }
    else
    {
        cout << setprecision(1) << fixed << (soma/double (n)) << endl;
    }

    return 0;
}
