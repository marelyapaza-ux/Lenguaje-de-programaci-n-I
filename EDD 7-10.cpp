#include <iostream>
using namespace std;

int main() 
{
    int suma=0;
    cout << "SUMAR NUMEROS DE 1 A 10" << endl;
    for (int i = 1; i <=10; i++) {
        cout << i << endl; 
        suma = suma + i;
    }  
    cout << "Suma" << suma << endl;
    return 0;
}
