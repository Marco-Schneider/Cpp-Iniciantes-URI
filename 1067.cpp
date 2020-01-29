//URI Online Judge - Iniciantes - 1067

#include <iostream>

using namespace std;

int main()
{
    int i, x;

    cin >> x;

    for(i=1; i<=x; i++)
    {
        if(i%2 != 0) //O número é ímpar
        {
            cout << i << endl;
        }
    }

    return 0;
}
