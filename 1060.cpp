//URI Online Judge - Iniciantes -  1060

#include <iostream>

using namespace std;

int main()
{
    float vetor[6];
    int positivos = 0, i;

    for(i=0; i<6; i++)
    {
        cin >> vetor[i];
        if(vetor[i] > 0)
        {
            positivos =  positivos + 1;
        }
    }

    cout << positivos << " valores positivos\n";

    return 0;
}
