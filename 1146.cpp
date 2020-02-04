//URI Online Judge - Iniciantes - 1146

#include <iostream>

using namespace std;

int main()
{
    int X;
    int j;

    cin >> X;

    while(X != 0)
    {
        j = 1;
        for(int i=1; i<X; i++)
        {
            cout << i << " ";
            j += 1;
        }
        cout << j << endl;
        cin >> X;
    }

    return 0;
}
