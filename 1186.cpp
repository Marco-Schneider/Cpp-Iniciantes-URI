//URI Online Judge - Iniciantes 1186

#include <iostream>
#include <iomanip>
#define colunas 12
#define linhas 12

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

    for(int i=11; i>0; i--)
    {
            for(int j=(12-i); j<colunas; j++)
            {
                soma += matriz[i][j];
                n++;
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
