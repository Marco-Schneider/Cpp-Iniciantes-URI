//URI Online Judge - Iniciantes - 1145

#include <iostream>

using namespace std;

int main()
{
    int X, Y;
    int j = 1;

    cin >> X >> Y;

    for(int i = 1; i <= Y; i++)
    {
        if(j == X)
        {
            cout << i << "\n";
            j = 1;
        }
        else
        {
            cout << i << " ";
            j += 1;
        }
    }

    return 0;
}
