//URI Online Judge - Iniciantes - 1070

#include <iostream>

using namespace std;

int main()
{
    int valores = 0;
    int i, x;

    cin >> x;

    while(valores != 6)
    {
        if(x%2 != 0)
        {
            cout << x << endl;
            valores = valores + 1;
        }
        x = x + 1;
    }

    return 0;
}
