// funda-proyecto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
#include <iomanip> // Para utilizar los manipuladores de formato
using namespace std;
// #4 : Administración hotel
int main()
{
	std::locale::global(std::locale("")); // tildes, signos de pregunta, etc...

	// Declaración de variables
	int opcion = 0;
	int tipo_habitacion{ 1 }; // 1; individual, 2; doble, 3; triple
	int dias = { 0 };
	double costoHabitacion = { 0 };
	double descuento = { 0 };
	bool esSocio{ false }; // Es o no socio...
	bool llevaDesayuno{ false }; // incluye o no, desayuno

	// Bucle principal para un menú
	while (opcion != 4) {

		// Para la siguiente cotización reinicio...
		tipo_habitacion =  1; // 1; individual, 2; doble, 3; triple
		dias = 0;
		costoHabitacion = 0;
		descuento = 0;
		esSocio = false; // Es o no socio...
		llevaDesayuno = false; // incluye o no, desayuno

		// Menú de opciones
		cout << "-------------HOTEL 5 estrellas-------------" << endl;
		cout << "Menu de opciones:" << endl;
		cout << "1. Cotizar habitacion" << endl;
		cout << "4. Salir" << endl;
		cout << "Elija una opcion: ";
		cin >> opcion;

		system("cls");

		string socio = "";
		string desayuno = "";

		switch (opcion) {
		case 1:
			// ¿Se trata de un socio?
			cout << "\n¿Es usted socio (S/N)? ";
			cin >> socio;

			if (socio == "S") {
				esSocio = true;
			}

			cout << "\n¿Incluye desayuno (S/N)? ";
			cin >> desayuno;

			if (desayuno == "S") {
				llevaDesayuno = true;
			}

			cout << "\nTipo de habitacion (individual: 1, doble: 2, cuadruple: 3) ";
			cin >> tipo_habitacion;

			switch (tipo_habitacion)
			{
			case 1:
				costoHabitacion = 17000;
				if (llevaDesayuno) {
					costoHabitacion += 3500;
				}
				break;
			case 2:
				costoHabitacion = 25000;
				if (llevaDesayuno) {
					costoHabitacion += 6000;
				}
				break;
			case 3:
				costoHabitacion = 42000;
				if (llevaDesayuno) {
					costoHabitacion += 9000;
				}
				break;
			default:
				break;
			}

			cout << "\n¿Cuantos dias? ";
			cin >> dias;

			if (dias > 3 && esSocio) {
				descuento = costoHabitacion * 0.25;
			}

			if (dias > 3 && !esSocio) {
				descuento = costoHabitacion * 0.10;
			}
			
			system("cls");

			// Imprimir la tabla
			cout << setw(20) << left << "Concepto" << setw(30) << left << "Valor" << endl;
			cout << setw(30) << left << "Tipo de Habitación" << setw(30) << left << tipo_habitacion << endl;
			cout << setw(30) << left << "Días" << setw(30) << left << dias << endl;
			cout << setw(30) << left << "Desayuno" << setw(30) << left << (llevaDesayuno ? "Sí" : "No") << endl;
			cout << setw(30) << left << "Socio" << setw(30) << left << (esSocio ? "Sí" : "No") << endl;
			cout << setw(30) << left << "Descuento Aplicado" << setw(30) << left << descuento << endl;
			cout << setw(30) << left << "TOTAL" << setw(30) << left << (costoHabitacion - descuento) << endl;
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
