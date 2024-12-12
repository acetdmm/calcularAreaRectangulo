#include <iostream>
using namespace std;

double calcularAreaRectangulo(double base, double altura) {
return base * altura;
}

int main() {
    double base, altura;
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    double area = calcularAreaRectangulo(base, altura);
        cout << "El area del rectangulo es: " << area << endl;

    return 0;
}
