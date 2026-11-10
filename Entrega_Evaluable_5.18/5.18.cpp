#include <iostream>
#include <string>
int main() {
	std::string numero;
	std::cout << "Introduce un numero entero positivo de cuatro digitos: ";
	std::cin >> numero;
	int num0 = numero[0] - '0'; //se convierte los caracteres a número con ASCII
	int num1 = numero[1] - '0';
	int num2 = numero[2] - '0';
	int num3 = numero[3] - '0';
	std::cout <<"Tu numero invertido es: " << num3 << num2 << num1 << num0;
	return 0;
}