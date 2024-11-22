#include <string> // Para usar cadenas de texto (std::string)
// Comprueba si el archivo ya se incluyó; si no, lo incluye
#ifndef PRODUCTOS_H
#define PRODUCTOS_H

// Definición de la clase Producto
class Producto {
    
    // Atributos protegidos (accesibles por la clase y sus derivadas)
    protected:
        int antig; // Antigüedad del producto (en años)
        std::string modelo; // Modelo del producto
        float precio; // Precio del producto
        int durabilidad; // Durabilidad esperada del producto (en años)
        float descuento; // Porcentaje de descuento por antigüedad

    // Métodos públicos (accesibles desde fuera de la clase)
    public:
        // Constructor de la clase
        Producto(int a, std::string m, float p, int du, float de) 
            : antig(a), modelo(m), precio(p), durabilidad(du), descuento(de) {};

        // Métodos getter para obtener los valores de los atributos
        std::string get_modelo(); 
        int get_antig();          
        float get_precio();       

        // Métodos setter para modificar los valores de los atributos
        void set_modelo(std::string); 
        void set_antig(int);          
        void set_precio(float);      

        // Métodos adicionales
		
		// Calcula los impuestos aplicados al precio (30%)
        float impuestos(); 
		// Calcula los años restantes de durabilidad del producto		
        int cuanto_dura();	
		// Calcula el precio con descuento según la antigüedad
        float descuento_vejez();  
};

// Implementación de los métodos

// Obtiene el modelo del producto
std::string Producto::get_modelo() {
    return modelo;
}

// Obtiene la antigüedad del producto
int Producto::get_antig() {
    return antig;
}

// Obtiene el precio del producto
float Producto::get_precio() {
    return precio;
}

// Establece un nuevo modelo para el producto
void Producto::set_modelo(std::string m) {
    modelo = m;
}

// Establece una nueva antigüedad para el producto
void Producto::set_antig(int a) {
    antig = a;
}

// Establece un nuevo precio para el producto
void Producto::set_precio(float p) {
    precio = p;
}

// Calcula los impuestos sobre el precio (30% del precio)
float Producto::impuestos() {
    return precio * 0.3;
}

// Calcula cuántos años le quedan de vida útil al producto
int Producto::cuanto_dura() {
    return durabilidad - antig;
}

// Calcula el precio del producto con un descuento proporcional a su antigüedad
float Producto::descuento_vejez() {
	// Porcentaje total de descuento según la antigüedad
    float des = antig * descuento;
	 // Se aplica el descuento al precio original
    des = precio - (des * precio);    
    return des;
}

#endif


