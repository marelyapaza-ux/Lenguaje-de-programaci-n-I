#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Ingrese el valor de a" << endl;
    cin >> a;
    cout << "Ingrese el valor de b" << endl;
    cin >> b;
    cout << "Ingrese el valor de c" << endl;
    cin >> c;

    if (a>b && a>c)
        cout << "El numero mayor es: " << a << endl;
    else if (b>a && b>c)
        cout << "El numero mayor es: " << b << endl;

    else
        cout << "El numero mayor es: " << c << endl;


    return 0;
}
