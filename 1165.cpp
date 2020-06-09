//URI Online Judge - Iniciantes 1165

#include <iostream>

using namespace std;

int main()
{
    int N; //Quantidade de casos de teste
    int X; //Número a ser verificado se é primo
    bool prime; //Booleano para primo - false == número não é primo / true == número é primo

    cin >> N;

    for(int i=0; i<N; i++)
    {
        prime = true;
        cin >> X;
        for(int j=2; j<X; j++)
        {
            if(X % j == 0) //Número é divisível por outro que não ele mesmo e 1
            {
                prime = false; //Número não primo
                break;
            }
        }
        if(prime == false)
        {
            cout << X << " nao eh primo\n";
        }
        else
        {
            cout << X << " eh primo\n";
        }
    }
    return 0;
}