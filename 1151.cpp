//URI Online Judge - Iniciantes 1151
//REPENSAR UMA OUTRA MANEIRA DE OTIMIZAR

#include <iostream>

using namespace std;

int main()
{
    int primeiro = 0, segundo = 1, terceiro;
    int i, N; //N < 46

    cin >> N;

    cout << "0 1 ";

    for(i = 2; i<N; i++)
    {
        terceiro = primeiro + segundo;
        primeiro = segundo;
        segundo = terceiro;

        if (i == (N-1))
        {
            cout << terceiro << endl;
            break;
        }
        cout << terceiro << " ";

    }

    return 0;
}