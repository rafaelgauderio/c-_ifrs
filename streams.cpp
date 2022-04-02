#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a;
    double number=86762.364524;
    cout << "Informe um número inteiro: ";
    cin >> a;
    cout << hex << showbase << uppercase << "Valor em hexadecimal: " << a << "\n";
    cout << "Mostrando número double em diferentes formatos.\n";
    cout << fixed << setprecision(4) << "Valor com 4 casas decimais: " << number << "\n";
    cout << defaultfloat << setprecision(6) << "Notação científica com 6 casas decimais: " << number << "\n";
    cout << scientific << setprecision(11) << "Valor com  11 digitos significativos: " << number << "\n";

    return 0;
}
