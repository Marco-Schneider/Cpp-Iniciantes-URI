//URI Online Judge - Iniciantes - 1115

#include <iostream>

using namespace std;

int main()
{
    int X, Y; //Coordenadas cartesianas X e Y

    cin >> X >> Y;

    while(X!=0 && Y!=0) //Quando uma das coordenadas for nula, o laço while é acabado
    {
        if(X>0 && Y>0) //Primeiro quadrante
            cout << "primeiro\n";
        else if(X<0 && Y>0) //Segundo quadrante
            cout << "segundo\n";
        else if(X<0 && Y<0) //Terceiro quadrante
            cout << "terceiro\n";
        else
            cout << "quarto\n";

        cin >> X >> Y;

    }

    return 0;
}
