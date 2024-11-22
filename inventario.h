#include "cama.h"       // Clase para trabajar con camas
#include "mesa.h"       // Clase para trabajar con mesas
#include "television.h" // Clase para trabajar con televisores
#include <string>       // Para usar cadenas de texto (std::string)
#include <iostream>     // Para imprimir información en consola

// Comprueba si el archivo ya se incluyó; si no, lo incluye
#ifndef INVENTARIO_H
#define INVENTARIO_H

// Clase para gestionar un inventario de productos
class Inventario {
    private:
		// Arreglo para almacenar hasta 100 camas
        Cama cama[100];
		// Arreglo para almacenar hasta 100 mesas		
        Mesa mesa[100];    
		// Arreglo para almacenar hasta 100 televisores		
        Television television[100];   
		// Cantidad de camas en el inventario		
        int cposicion = 0;    
		// Cantidad de mesas en el inventario
        int mposicion = 0;   
		// Cantidad de televisores en el inventario
        int tposicion = 0;       

    public:
        // Constructor del inventario
        Inventario() :cposicion(0), mposicion(0), tposicion(0) {};

        // Métodos para crear productos y agregarlos al inventario
        void crea_cama(int, std::string, float, std::string);
        void crea_mesa(int, std::string, float, int);
        void crea_television(int, std::string, float, float);

        // Calcula el impuesto total de todos los productos en el inventario
        float impuesto_total();

        // Limpia los arreglos
        void limpiar_arreglos();

        // Muestra todos los productos almacenados
        void mostrar_productos();

        // Métodos para obtener productos individuales por su índice
        Cama get_cama(int);
        Mesa get_mesa(int);
        Television get_television(int);

        // Métodos para obtener la cantidad de productos en cada categoría
        int get_cposicion();
        int get_mposicion();
        int get_tposicion();
};

// Implementación de los métodos

// Agrega una nueva cama al inventario
void Inventario::crea_cama(int a, std::string m, float p, std::string c) {
    Cama nueva_cama(a, m, p, c);
    cama[cposicion] = nueva_cama; // Se agrega al arreglo
    cposicion++;                  // Se incrementa la posición de camas
}

// Agrega una nueva mesa al inventario
void Inventario::crea_mesa(int a, std::string m, float p, int pa) {
    Mesa nueva_mesa(a, m, p, pa);
    mesa[mposicion] = nueva_mesa; // Se agrega al arreglo
    mposicion++;                  // Se incrementa la posición de mesas
}

// Agrega una nueva televisión al inventario
void Inventario::crea_television(int a, std::string m, float p, float pu) {
    Television nueva_television(a, m, p, pu);
    television[tposicion] = nueva_television; // Se agrega al arreglo
    tposicion++;   // Se incrementa la posición de televisores
}

// Calcula el impuesto total sobre todos los productos
float Inventario::impuesto_total() {
    float impuesto = 0.3; // Porcentaje de impuesto
    int total = 0;        // Precio acumulado de todos los productos

    // Suma los precios de todas las camas
    for (int i = 0; i < cposicion; i++) {
        total += cama[i].get_precio();
    }
    // Suma los precios de todas las mesas
    for (int i = 0; i < mposicion; i++) {
        total += mesa[i].get_precio();
    }
    // Suma los precios de todas las televisiones
    for (int i = 0; i < tposicion; i++) {
        total += television[i].get_precio();
    }

    return total * impuesto; // Calcula el impuesto total
}

// Limpia todos los productos en los arreglos
void Inventario::limpiar_arreglos() {
    for (int i = 0; i < 100; i++) {
		// Limpia el arreglo de cama
        cama[i] = Cama(0, "", 0.0, "");  
		// Limpia el arreglo de mesa
        mesa[i] = Mesa(0, "", 0.0, 0);   
		// Limpia el arreglo de television		
        television[i] = Television(0, "", 0.0, 0); 
    }
}

// Muestra la información de todos los productos
void Inventario::mostrar_productos() {
    std::cout << "CAMAS: " << std::endl;
    for (int i = 0; i < cposicion; i++) {
        std::cout << "Modelo: " << cama[i].get_modelo() << ", Precio: "
                  << cama[i].get_precio() << ", Antigüedad: "
                  << cama[i].get_antig() << ", Colchón: "
                  << cama[i].get_colchon() << std::endl;
    }

    std::cout << "MESAS: " << std::endl;
    for (int i = 0; i < mposicion; i++) {
        std::cout << "Modelo: " << mesa[i].get_modelo() << ", Precio: "
                  << mesa[i].get_precio() << ", Antigüedad: "
                  << mesa[i].get_antig() << ", Patas: "
                  << mesa[i].get_patas() << std::endl;
    }

    std::cout << "TELEVISIONES: " << std::endl;
    for (int i = 0; i < tposicion; i++) {
        std::cout << "Modelo: " << television[i].get_modelo() << ", Precio: "
                  << television[i].get_precio() << ", Antigüedad: "
                  << television[i].get_antig() << ", Pulgadas: "
                  << television[i].get_pulgadas() << std::endl;
    }
}

// Obtiene una cama por índice
Cama Inventario::get_cama(int index) {
    if (index >= 0 && index < cposicion) {
        return cama[index];
    } else {
        std::cout << "Índice fuera de rango" << std::endl;
        return Cama();
    }
}

// Obtiene una mesa por índice
Mesa Inventario::get_mesa(int index) {
    if (index >= 0 && index < mposicion) {
        return mesa[index];
    } else {
        std::cout << "Índice fuera de rango" << std::endl;
        return Mesa();
    }
}

// Obtiene una televisión por índice
Television Inventario::get_television(int index) {
    if (index >= 0 && index < tposicion) {
        return television[index];
    } else {
        std::cout << "Índice fuera de rango" << std::endl;
        return Television();
    }
}

// Obtiene la cantidad de camas en el inventario
int Inventario::get_cposicion() {
    return cposicion;
}

// Obtiene la cantidad de mesas en el inventario
int Inventario::get_mposicion() {
    return mposicion;
}

// Obtiene la cantidad de televisiones en el inventario
int Inventario::get_tposicion() {
    return tposicion;
}

#endif 

