//URI Online Judge - Iniciantes - 1074

#include <iostream>

using namespace std;

int main()
{
    int N; //Quantidade de casos de teste
    int X;

    cin >> N;

    for(int i=0; i<N; i++)
    {
        cin >> X;
        if(X%2 == 0 && X>0) //Número par --> Even
            cout << "EVEN POSITIVE\n";
        else if(X%2 != 0 && X>0)
            cout << "ODD POSITIVE\n";
        else if(X%2 == 0 && X<0)
            cout << "EVEN NEGATIVE\n";
        else if(X%2 !=0 && X<0)
            cout << "ODD NEGATIVE\n";
        else
            cout << "NULL\n";
    }

    return 0;
}
