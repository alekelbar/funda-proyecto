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
    char opcion;
    double subtotal = 0.0;
    const double iva = 0.13;

    std::cout << "Bienvenido a la pizzeria!" << std::endl;

    do {
        std::cout << "Menú de Pizzas:" << std::endl;
        std::cout << "a) Suprema\n\r b) Jamón y queso\n\r c) Vegetariana\n\r d) Especial" << std::endl;
        std::cout << "Seleccione el tipo de pizza (a/b/c/d): ";
        std::cin >> opcion;

        int cantidad = 0;
        double precio = 0;
        std::string tamano = "";

        switch (opcion) {
        case 'a':
            precio = 3000;
            break;
        case 'b':
            precio = 3000;
            break;
        case 'c':
            precio = 3000;
            break;
        case 'd':
            precio = 3000;
            break;
        default:
            std::cout << "Opción no válida. Intente nuevamente." << std::endl;
            continue;
        }

        std::cout << "Seleccione el tamaño (1.Personal 2.Mediana 3.Grande 4.Extra grande): ";
        int opcionTamanio;
        std::cin >> opcionTamanio;

        switch (opcionTamanio) {
        case 1:
            tamano = "Personal";
            break;
        case 2:
            tamano = "Mediana";
            precio += 3500; // Aumentar el precio por ser mediana
            break;
        case 3:
            tamano = "Grande";
            precio += 5000; // Aumentar el precio por ser grande
            break;
        case 4:
            tamano = "Extra grande";
            precio += 9000; // Aumentar el precio por ser extra grande
            break;
        default:
            std::cout << "Tamaño no válido. Intente nuevamente." << std::endl;
            continue;
        }

        std::cout << "Ingrese la cantidad de pizzas de este tipo: ";
        std::cin >> cantidad;

        subtotal += precio * cantidad;

        std::cout << "¿Desea pedir otro tipo de pizza? (S/N): ";
        std::cin >> opcion;
    } while (opcion == 'S' || opcion == 's');

    double total = subtotal + (subtotal * iva);

    std::cout << "-------- Factura --------" << std::endl;
    std::cout << "Subtotal: $" << std::fixed << std::setprecision(2) << subtotal << std::endl;
    std::cout << "IVA (13%): $" << std::fixed << std::setprecision(2) << subtotal * iva << std::endl;
    std::cout << "Total: $" << std::fixed << std::setprecision(2) << total << std::endl;

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
