#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
int tipoEntrada;
int precioEntrada;
char esCliente;

int main() {
	cout << R"(
	---MENU---
	Tipo de entrada
	1. Super Vip	=> S/.212
	2. Vip		=> S/.170
	3. Preferencial => S/.136
	4. General	=> S/.59
)";
	do {
		cout << "Seleccione el tipo de entrada que desea (numero del 1 al 4): ";
		cin >> tipoEntrada;
	} while (tipoEntrada > 4 || tipoEntrada < 1);
	switch (tipoEntrada) {
	case 1:
		precioEntrada = 212;
		break;
	case 2:
		precioEntrada = 170;
		break;
	case 3:
		precioEntrada = 136;
		break;
	case 4:
		precioEntrada = 59;
		break;
	}
	do {
		cout << "¿Es usted cliente actual de Claro? Por favor ingrese S o N: ";
		cin >> esCliente;
	} while (esCliente != 'S' && esCliente != 's' && esCliente != 'n' && esCliente != 'N');
	switch (esCliente) {
	case 's':
	case 'S':
		precioEntrada = precioEntrada - (precioEntrada * 0.20);
	default:
		precioEntrada = precioEntrada;
	}
	cout << "El monto a pagar es: " << precioEntrada << endl;
}
