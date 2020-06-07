//URI Online Judge - Iniciantes 1149

#include <iostream>

using namespace std;

int main()
{
    int A, N;
    int acumulado = 0;

    cin >> A >> N;

    while(N <= 0)
    {
        cin >> N;
    }

    for(int i = 0; i <= (N-1); i++)
    {
        acumulado = acumulado + (A+i);
    }

    cout << acumulado << endl;

    return 0;
}