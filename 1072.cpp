//URI Online Judge - Iniciantes - 1072

#include <iostream>

using namespace std;

int main()
{
    int N; //N�mero de casos de teste
    int X; //N�mero para checar se est� no intervalo [10, 20]
    int in = 0, out = 0, i;

    cin >> N;

    for(i=0; i<N; i++)
    {
        cin >> X;
        if(X>=10 && X<=20)
        {
            in += 1;
        }
        else
        {
            out += 1;
        }
    }

    cout << in << " in\n" << out << " out\n";

    return 0;
}
