#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;

    cout << "Ingrese el cateto a: ";
    cin >> a;

    cout << "Ingrese el cateto b: ";
    cin >> b;

    c = sqrt((a * a) + (b * b));

    cout << "La hipotenusa c es: " << c << endl;

    return 0;
}
