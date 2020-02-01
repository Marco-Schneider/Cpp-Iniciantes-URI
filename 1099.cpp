//URI Online Judge - Iniciantes - 1099

#include <iostream>

using namespace std;

int main()
{
    int N; //Quantidade de casos de teste
    int X, Y;
    int SomaImpar;

    cin >> N;

    for(int i=0; i<N; i++)
    {
        SomaImpar = 0;
        cin >> X >> Y;
        if(Y>X)
        {
            for(int j=X+1; j<Y; j++)
            {
                if(j%2 != 0) //Impar
                    SomaImpar += j;
            }
        }
        else
        {
            for(int k=Y+1; k<X; k++)
            {
                if(k%2 != 0) //Impar
                    SomaImpar += k;
            }
        }
        cout << SomaImpar << endl;
    }

    return 0;
}
