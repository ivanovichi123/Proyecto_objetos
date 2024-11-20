#include <iostream>       // Para imprimir información en consola
#include <string>         // Para usar cadenas de texto (std::string)
#include "productos.h"    // Incluye la clase Producto
#include "inventario.h"   // Incluye la clase Inventario

int main() {
// Crea un objeto de tipo Inventario
Inventario inventario;

// Limpia los arreglos del inventario antes de agregar elementos
inventario.limpiar_arreglos();

// Crear y agregar objetos al inventario
inventario.crea_television(2, "Sony", 543.2, 12.3);// Crear una televisión
inventario.crea_television(4, "Acer", 432.4, 15.2);// Crear otra televisión
inventario.crea_mesa(7, "Honeywell", 523.1, 3);    // Crear una mesa
inventario.crea_mesa(4, "Esteren", 768.3, 5);      // Crear otra mesa
inventario.crea_cama(5, "Casio", 983.9, "Sognare");// Crear una cama
inventario.crea_cama(3, "spring air", 1002.4, "Excel");// Crear otra cama

// Mostrar los impuestos totales calculados para todos los productos
std::cout << "Impuestos totales: " << inventario.impuesto_total() << std::endl;

// Mostrar los productos en el inventario
inventario.mostrar_productos();

// Mostrar todas las camas del inventario junto con su información
std::cout << "CAMAS: " << std::endl;
for (int i = 0; i < inventario.get_cposicion(); i++) {
    // Obtener la cama actual del inventario
    Cama cama_actual = inventario.get_cama(i);

    // Mostrar información detallada de la cama
    std::cout << "Cama " << i + 1 << ":" << std::endl;
    std::cout << "  Modelo: " << cama_actual.get_modelo() << std::endl;
    std::cout << "  Precio: $" << cama_actual.get_precio() << std::endl;
    std::cout << "  Antiguedad: " << cama_actual.get_antig() 
	<< " anos" << std::endl;
    std::cout << "  Colchon: " << cama_actual.get_colchon() << std::endl;
    std::cout << "  Cuanto va a durar: " << cama_actual.cuanto_dura() 
	<< " anos" << std::endl;

    // Calcular y mostrar el precio con descuento por vejez
    float descuento = cama_actual.descuento_vejez();
    std::cout << "  Precio con descuento por vejez: $" 
	<< descuento << std::endl;
    std::cout << std::endl;
}

// Mostrar todas las mesas del inventario junto con su información
std::cout << "MESAS: " << std::endl;
for (int i = 0; i < inventario.get_mposicion(); i++) {
    // Obtener la mesa actual del inventario
    Mesa mesa_actual = inventario.get_mesa(i);

    // Mostrar información detallada de la mesa
    std::cout << "Mesa " << i + 1 << ":" << std::endl;
    std::cout << "  Modelo: " << mesa_actual.get_modelo() << std::endl;
    std::cout << "  Precio: $" << mesa_actual.get_precio() << std::endl;
    std::cout << "  Antiguedad: " << mesa_actual.get_antig() 
	<< " anos" << std::endl;
    std::cout << "  Patas: " << mesa_actual.get_patas() << std::endl;
    std::cout << "  Cuanto va a durar: " << mesa_actual.cuanto_dura() 
	<< " anos" << std::endl;

    // Calcular y mostrar el precio con descuento por vejez
    float descuento = mesa_actual.descuento_vejez();
    std::cout << "  Precio con descuento por vejez: $" << descuento 
	<< std::endl;
    std::cout << std::endl;
}

// Mostrar todas las televisiones del inventario junto con su información
std::cout << "TELEVISIONES: " << std::endl;
for (int i = 0; i < inventario.get_tposicion(); i++) {
    // Obtener la televisión actual del inventario
    Television television_actual = inventario.get_television(i);

    // Mostrar información detallada de la televisión
    std::cout << "Television " << i + 1 << ":" << std::endl;
    std::cout << "  Modelo: " << television_actual.get_modelo() << std::endl;
    std::cout << "  Precio: $" << television_actual.get_precio() << std::endl;
    std::cout << "  Antiguedad: " << television_actual.get_antig() 
	<< " anos" << std::endl;
    std::cout << "  Pulgadas: " << television_actual.get_pulgadas() 
	<< std::endl;
    std::cout << "  Cuanto va a durar: " << television_actual.cuanto_dura() 
	<< " anos" << std::endl;

    // Calcular y mostrar el precio con descuento por vejez
    float descuento = television_actual.descuento_vejez();
    std::cout << "  Precio con descuento por vejez: $" << descuento 
	<< std::endl;
    std::cout << std::endl;
}

return 0; // Fin del programa
}


