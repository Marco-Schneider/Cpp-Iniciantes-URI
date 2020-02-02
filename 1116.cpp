//URI Online Judge - Iniciantes - 1116

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N; //Quantidade de casos de teste
    int X, Y;
    float x, y;

    cin >> N;

    for(int i=0; i<N; i++)
    {
        cin >> X >> Y;
        x = X; //Casting de variáveis
        y = Y;

        if(y == 0.0)
            cout << "divisao impossivel\n";
        else
            cout << setprecision(1) << fixed << x/y << endl;
    }

    return 0;
}
