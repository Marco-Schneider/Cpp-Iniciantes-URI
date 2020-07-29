//URI Online Judge - Iniciantes 1187

#include <iostream>
#include <iomanip>
#define linhas 12
#define colunas 12

using namespace std;

int main()
{
    double matriz[linhas][colunas];
    double soma = 0;
    int n = 0, k = colunas - 1; //Quantidade de elementos (será usado na hora de calcular a média)
    char operation;

    cin >> operation;

    //Preenchimento da matriz
    for(int i=0; i<linhas; i++)
    {
        for(int j=0; j<colunas; j++)
            cin >> matriz[i][j];
    }

    for(int i=0; i<(linhas/2.0); i++)
    {
        for(int j=1+i; j<k-i; j++)
        {
            soma = soma + matriz[i][j];
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
