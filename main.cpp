#include <iostream>       // Para imprimir información en consola
#include <string>         // Para usar cadenas de texto (std::string)
#include "productos.h"    // Incluye la clase Producto
#include "inventario.h"   // Incluye la clase Inventario

int main() {
    Inventario inventario;  // Se crea un objeto de tipo Inventario vacío
    int opcion;             // Variable para almacenar la opción seleccionada

    // Ciclo while para mostrar el menu y permitir al usuario elegir opciones
    while (opcion != 8) { // Repetir el menu mientras no se escoja la opción 8
        // Mostrar las opciones del menu
        std::cout << "\nMENU INTERACTIVO" << std::endl;
        std::cout << "1. Limpiar inventario" << std::endl;
        std::cout << "2. Agregar una cama" << std::endl;
        std::cout << "3. Agregar una mesa" << std::endl;
        std::cout << "4. Agregar una television" << std::endl;
        std::cout << "5. Mostrar todos los productos" << std::endl;
        std::cout << "6. Calcular y mostrar impuestos totales" << std::endl;
        std::cout << "7. Mostrar descuentos por vejez de los productos" 
		<< std::endl;
        std::cout << "8. Salir" << std::endl;
        std::cout << "Ingrese una opcion: ";
        std::cin >> opcion;

        // Validar que la entrada sea un numero entero valido
        while (std::cin.fail()) {
            std::cout << "Entrada invalida. Ingrese un numero entero: ";
			// Elimina el estado de error de std::cin
            std::cin.clear();       
			// Elimina cualquier caracter restante (maximo 1000)			
            std::cin.ignore(1000, '\n');   
			// Solicitar nuevamente al usuario que ingrese lo que se lel pide.
            std::cin >> opcion;  
        }

        // Evaluar la opción seleccionada
        switch (opcion) {
            case 1:  // Limpiar el inventario
				// Elimina todos los productos del inventario
                inventario.limpiar_arreglos();  
                std::cout << "Inventario limpiado exitosamente." << std::endl;
                break; // Termina el caso y sale del bloque switch

            case 2: {  // Agregar una cama
                // Variables para los atributos de la cama
                int antiguedad;
                std::string modelo, colchon;
                float precio;

                // Solicitar al usuario los datos necesarios
                std::cout << "Ingrese la antiguedad: ";
                std::cin >> antiguedad;
                while (std::cin.fail()) {
                    std::cout <<"Entrada invalida. Ingrese un numero entero: ";
					// Elimina el estado de error de std::cin
					std::cin.clear();           
					// Elimina cualquier caracter restante (maximo 1000)
					std::cin.ignore(1000, '\n');  
					// Solicitar nuevamente al usuario que ingrese lo que se lel pide.					
					std::cin >> opcion;  
                }

                std::cout << "Ingrese el modelo: ";
				// Elimina el salto de línea ('\n') dejado por std::cin
                std::cin.ignore();  
				// Lee la línea de texto ingresada por el usuario y la almacena en 'modelo'
                std::getline(std::cin, modelo); 

                std::cout << "Ingrese el precio: ";
                std::cin >> precio;
                while (std::cin.fail()) {
                    std::cout <<"Entrada invalida. Ingrese un numero valido: ";
					// Elimina el estado de error de std::cin
					std::cin.clear();          
					// Elimina cualquier caracter restante (maximo 1000)
					std::cin.ignore(1000, '\n');  
					// Solicitar nuevamente al usuario que ingrese lo que se lel pide.
					std::cin >> opcion;  
                }

                std::cout << "Ingrese el tipo de colchon: ";
				// Elimina el salto de línea ('\n') dejado por std::cin
                std::cin.ignore(); 
				// Lee la línea de texto ingresada por el usuario y la almacena en 'colchon'
                std::getline(std::cin, colchon); 

                // Crear y agregar la cama al inventario
                inventario.crea_cama(antiguedad, modelo, precio, colchon);
                std::cout << "Cama agregada exitosamente." << std::endl;
                break; // Termina el caso y sale del bloque switch
            }

            case 3: {  // Agregar una mesa
                // Variables para los atributos de la mesa
                int antiguedad, patas;
                std::string modelo;
                float precio;

                // Solicitar al usuario los datos necesarios
                std::cout << "Ingrese la antiguedad: ";
                std::cin >> antiguedad;
                while (std::cin.fail()) {
                    std::cout <<"Entrada invalida. Ingrese un numero entero: ";
					// Elimina el estado de error de std::cin
					std::cin.clear();        
					// Elimina cualquier caracter restante (maximo 1000)
					std::cin.ignore(1000, '\n');  
					// Solicitar nuevamente al usuario que ingrese lo que se lel pide.
					std::cin >> opcion;  
                }

                std::cout << "Ingrese el modelo: ";
                std::cin.ignore();
				// Lee la línea de texto ingresada por el usuario y la almacena en 'modelo'
                std::getline(std::cin, modelo); 

                std::cout << "Ingrese el precio: ";
                std::cin >> precio;
                while (std::cin.fail()) {
                    std::cout <<"Entrada invalida. Ingrese un numero valido: ";
					 // Elimina el estado de error de std::cin
					std::cin.clear();      
					// Elimina cualquier caracter restante (maximo 1000)
					std::cin.ignore(1000, '\n');   
					// Solicitar nuevamente al usuario que ingrese lo que se lel pide.
					std::cin >> opcion;  
                }

                std::cout << "Ingrese el numero de patas: ";
                std::cin >> patas;
                while (std::cin.fail()) {
                    std::cout <<"Entrada invalida. Ingrese un numero entero: ";
					// Elimina el estado de error de std::cin
					std::cin.clear();   
					// Elimina cualquier caracter restante (maximo 1000)
					std::cin.ignore(1000, '\n');
					 // Solicitar nuevamente al usuario que ingrese lo que se lel pide.
					std::cin >> opcion; 
                }

                // Crear y agregar la mesa al inventario
                inventario.crea_mesa(antiguedad, modelo, precio, patas);
                std::cout << "Mesa agregada exitosamente." << std::endl;
                break; // Termina el caso y sale del bloque switch
            }

            case 4: {  // Agregar una televisión
                // Variables para los atributos de la televisión
                int antiguedad;
                std::string modelo;
                float precio, pulgadas;

                // Solicitar al usuario los datos necesarios
                std::cout << "Ingrese la antiguedad: ";
                std::cin >> antiguedad;
                while (std::cin.fail()) {
                    std::cout <<"Entrada invalida. Ingrese un numero entero: ";
					// Elimina el estado de error de std::cin
					std::cin.clear();     
					// Elimina cualquier caracter restante (maximo 1000)
					std::cin.ignore(1000, '\n');  
					// Solicitar nuevamente al usuario que ingrese lo que se lel pide.
					std::cin >> opcion;  
                }

                std::cout << "Ingrese el modelo: ";
                std::cin.ignore();
				// Lee la línea de texto ingresada por el usuario y la almacena en 'modelo'
                std::getline(std::cin, modelo); 

                std::cout << "Ingrese el precio: ";
                std::cin >> precio;
                while (std::cin.fail()) {
                    std::cout <<"Entrada invalida. Ingrese un numero valido: ";
					// Elimina el estado de error de std::cin
					std::cin.clear();        
					// Elimina cualquier caracter restante (maximo 1000)
					std::cin.ignore(1000, '\n');   
					// Solicitar nuevamente al usuario que ingrese lo que se lel pide.
					std::cin >> opcion;  
                }

                std::cout << "Ingrese el tamano en pulgadas: ";
                std::cin >> pulgadas;
                while (std::cin.fail()) {
                    std::cout << "Entrada invalida. Ingrese un numero valido: ";
					// Elimina el estado de error de std::cin
					std::cin.clear();        
					// Elimina cualquier caracter restante (maximo 1000)
					std::cin.ignore(1000, '\n'); 
					// Solicitar nuevamente al usuario que ingrese lo que se lel pide.
					std::cin >> opcion;  
                }

                // Crear y agregar la televisión al inventario
                inventario.crea_television(antiguedad, modelo,precio,pulgadas);
                std::cout << "Television agregada exitosamente." << std::endl;
                break; // Termina el caso y sale del bloque switch
            }

            case 5:  // Mostrar todos los productos en el inventario
				// Llama al método para imprimir todos los productos
                inventario.mostrar_productos();  
                break; // Termina el caso y sale del bloque switch

            case 6:// Calcular y mostrar los impuestos totales de los productos
                std::cout << "Impuestos totales: " 
				<< inventario.impuesto_total() << std::endl;
                break; // Termina el caso y sale del bloque switch

            case 7: {  // Mostrar los descuentos por vejez de los productos
                std::cout << "DESCUENTOS POR VEJEZ:" << std::endl;

                // Mostrar descuentos de camas
                for (int i = 0; i < inventario.get_cposicion(); i++) {
					// Obtiene la cama del inventario en la posición 'i'
                    Cama cama = inventario.get_cama(i); 
                    // Muestra el descuento aplicado a la cama
                    std::cout << "Cama " << i + 1 << " (" 
					<< cama.get_modelo() << "): $" 
					<< cama.descuento_vejez() << std::endl;
                }

                // Mostrar descuentos de mesas
                for (int i = 0; i < inventario.get_mposicion(); i++) {
					// Obtiene la mesa del inventario en la posición 'i'
                    Mesa mesa = inventario.get_mesa(i); 
                    // Muestra el descuento aplicado a la mesa
                    std::cout << "Mesa " << i + 1 << " (" 
					<< mesa.get_modelo() << "): $"
                    << mesa.descuento_vejez() << std::endl;
                }

                // Mostrar descuentos de televisores
                for (int i = 0; i < inventario.get_tposicion(); i++) {
					// Obtiene la televisión del inventario en la posición 'i'
                    Television tv = inventario.get_television(i); 
                    // Muestra el descuento aplicado a la televisión
                    std::cout << "Television " << i + 1 << " (" 
					<< tv.get_modelo() << "): $"
                    << tv.descuento_vejez() << std::endl;
                }
                break; // Termina el caso y sale del bloque switch
            }

            case 8:  // Salir
                std::cout << "Saliendo del programa..." << std::endl;
                break; // Termina el caso y sale del bloque switch

            default: // Opción invalida
                std::cout <<"Opcion invalida. Intente nuevamente."<< std::endl;
        }
    }

    return 0;
}





