//URI Online Judge - Iniciantes - 1073

#include <iostream>

using namespace std;

int main()
{
    int N;
    int i;

    cin >> N;

    for(i=2; i<=N; i++)
    {
        if(i%2 == 0)
        {
            cout << i << "^2 = " << i*i << endl;
        }
    }

    return 0;
}
