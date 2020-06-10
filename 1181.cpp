//URI Online Judge - Iniciantes 1181

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float matriz[12][12];
    int linha; //Indicará a linha na qual se sucederá a operação
    int soma;
    char operation; //Caractere que definirá a operação a ser realizada

    cin >> linha >> operation;

    for(int i=0; i<12; i++) //Preenchimento da matriz
    {
        for(int j=0; j<12; j++)
        {
            cin >> matriz[i][j];
        }
    }

    soma = 0;
    if(operation == 'S') //Realizar a operação de soma da linha indicada
    {
        for(int i=0; i<12; i++)
        {
            soma = soma + matriz[linha][i];
        }
        cout << setprecision(1) << fixed << float (soma) << endl;
    }
    else //Realizar a operação de cálculo da média
    {
        for(int i=0; i<12; i++)
        {
            soma = soma + matriz[linha][i];
        }
        cout << setprecision(1) << fixed << (soma/float (12)) << endl;
    }
    
    return 0;
}