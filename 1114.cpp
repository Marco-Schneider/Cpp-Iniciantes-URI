//URI Online Judge - Iniciantes - 1114

#include <iostream>

using namespace std;

int main()
{
    int Senha = 2002;
    int Tentativa;

    cin >> Tentativa;

    while(Senha != Tentativa)
    {
        cout << "Senha Invalida\n";
        cin >> Tentativa;
    }

    cout << "Acesso Permitido\n";

    return 0;
}
