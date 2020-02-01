//URI Online Judge - Iniciantes 1101

#include <iostream>

using namespace std;

int main()
{
    int M, N;
    int Sum;

    cin >> M >> N;

    while(M>0 && N>0)
    {
        Sum = 0;
        if(N>M)
        {
            for(int i=M; i<=N; i++)
            {
                cout << i << " ";
                Sum += i;
            }
            cout << "Sum=" << Sum << endl;
        }
        else
        {
            for(int j=N; j<=M; j++)
            {
                cout << j << " ";
                Sum += j;
            }
            cout << "Sum=" << Sum << endl;
        }

        cin >> M >> N;
    }

    return 0;
}
