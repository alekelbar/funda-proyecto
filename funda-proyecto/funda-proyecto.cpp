// funda-proyecto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// #2 : realizar retiros, ingresos y consultas de los saldos de sus clientes.
int main()
{
	// Declaración de variables
	double saldoInicial = 1000.0;
	double saldoActual = saldoInicial;
	int opcion = 0;
	double cantidad;

	// Bucle principal para un menú
	while (opcion != 4) {
		// Menú de opciones
		cout << "-------------BCR (Por que tampoco sirve xd)-------------" << endl;
		cout << "Menu de opciones:" << endl;
		cout << "1. Consultar saldo" << endl;
		cout << "2. Realizar retiro" << endl;
		cout << "3. Realizar deposito" << endl;
		cout << "4. Salir" << endl;
		cout << "Elija una opcion: ";
		cin >> opcion;

		system("cls");

		switch (opcion) {
		case 1:
			// Consultar saldo
			cout << "Saldo actual: $" << saldoActual << endl;
			break;
		case 2:
			// Realizar retiro
			cout << "Ingrese la cantidad a retirar: $";
			cin >> cantidad;
			if (cantidad <= saldoActual) {
				saldoActual -= cantidad;
				cout << "\nRetiro exitoso. Saldo actual: $" << saldoActual << endl;
			}
			else {
				cout << "\nSaldo insuficiente para realizar el retiro." << endl;
			}
			break;
		case 3:
			// Realizar depósito
			cout << "Ingrese la cantidad a depositar: $";
			cin >> cantidad;
			if (cantidad > 0) {
				saldoActual += cantidad;
				cout << "\nDepósito exitoso. Saldo actual: $" << saldoActual << endl;
			}
			else {
				cout << "\nLa cantidad a depositar debe ser mayor que 0." << endl;
			}
			break;
		case 4:
			// Salir del programa
			cout << "\nGracias por utilizar nuestros servicios." << endl;
			return 0;
		default:
			cout << "\nOpción no válida. Por favor, seleccione una opción válida." << endl;
		}
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
