//URI Online Judge - Iniciantes - 1048

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float Salario;

    cin >> Salario;

    if(Salario<=400.00)
    {
        cout << "Novo salario: " << setprecision(2) << fixed << Salario*1.15 << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << Salario*0.15 << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    if(Salario>400.00 && Salario<=800.00)
    {
        cout << "Novo salario: " << setprecision(2) << fixed << Salario*1.12 << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << Salario*0.12 << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    if(Salario>800.00 && Salario<=1200.00)
    {
        cout << "Novo salario: " << setprecision(2) << fixed << Salario*1.10 << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << Salario*0.10 << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    if(Salario>1200.00 && Salario<=2000.00)
    {
        cout << "Novo salario: " << setprecision(2) << fixed << Salario*1.07 << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << Salario*0.07 << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    if(Salario>2000.00)
    {
        cout << "Novo salario: " << setprecision(2) << fixed << Salario*1.04 << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << Salario*0.04 << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}
