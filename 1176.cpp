//URI Online Judge - Iniciantes 1176

#include <iostream>
#include <vector>
#define TAM 60

using namespace std;

int main()
{
    vector<unsigned long long int> fibonacci(TAM+1);
    unsigned long long int primeiro = 0, segundo = 1, terceiro;
    int i, j, T, N; //T: número de casos de teste / N: n-ésimo número da sequência

    //Preenchendo o vetor com a sequência de Fibonacci
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(i = 2; i<=TAM; i++)
    {
        terceiro = primeiro + segundo;
        fibonacci[i] = terceiro;
        primeiro = segundo;
        segundo = terceiro;
    }

    cin >> T;

    for(i=0; i<T; i++)
    {
        cin >> N;
        cout << "Fib(" << N << ") = " << fibonacci[N] << endl;
    }

    return 0;
}