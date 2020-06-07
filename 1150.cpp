//URI Online Judge - Iniciantes 1150

#include <iostream>

using namespace std;

int main()
{
    int X, Z, soma = 0, i = 0;
    int inteiros = 0; //Números de inteiros que devem ser somados em sequência para que a soma ultrapasse Z o mínimo possível

    cin >> X >> Z;

    while(Z <= X)
    {
        cin >> Z;
    }

    while(soma < Z)
    {
        soma = soma + (X+i);
        i++;
        inteiros++;
    }

    cout << inteiros << endl;

    return 0;
}