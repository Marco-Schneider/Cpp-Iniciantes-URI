//URI Online Judge - Iniciantes 1188

#include <iostream>
#include <iomanip>
#define linhas 12
#define colunas 12

using namespace std;

int main()
{
    double matriz[linhas][colunas];
    double soma;
    int n = 0, k = 1;
    char operation;

    cin >> operation;

    //Preenchendo a matriz
    for(int i=0; i<linhas; i++)
    {
        for(int j=0; j<colunas; j++)
            cin >> matriz[i][j];
    }

    for(int i=linhas-1; i>(linhas/2.0); i--)
    {
        for(int j=k; j<i; j++)
        {
            soma += matriz[i][j];
            n++;
        }
        k += 1;
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
