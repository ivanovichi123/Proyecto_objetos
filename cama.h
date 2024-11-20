#include <string> // Para usar cadenas de texto (std::string)
// Comprueba si el archivo ya se incluyó; si no, lo incluye
#ifndef CAMA_H   
#define CAMA_H

// Clase Cama que hereda de la clase base Producto
class Cama : public Producto {
    private:
		// Atributo específico de la cama que almacena el tipo de colchón
        std::string colchon;  

    public:
        // Constructor por defecto de la cama
        Cama() : Producto(0, "", 0.0, 10, 0.02), colchon("") {};

        // Constructor que recibe parámetros específicos para crear una cama
        // Llama al constructor de la clase que hereda (Producto) y 
		//establece el valor del colchon
        Cama(int a, std::string m, float p, std::string c) 
            : Producto(a, m, p, 10, 0.02), colchon(c) {};

        // Método que devuelve el tipo de colchon
        std::string get_colchon();
};


// Devuelve el tipo de colchón de la cama
std::string Cama::get_colchon() {
    return colchon;
}

#endif

