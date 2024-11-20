#include <string> // Para usar cadenas de texto (std::string)
// Comprueba si el archivo ya se incluyó; si no, lo incluye
#ifndef TELEVISION_H 
#define TELEVISION_H

// Clase Television que hereda de la clase base Producto
class Television : public Producto {
    private:
		// Atributo específico de la mesa que almacena las pulgadas
        float pulgadas;  

    public:
        // Constructor por defecto de la television
        Television() : Producto(0, "", 0.0, 7, 0.05), pulgadas(0) {};

        // Constructor que recibe parámetros específicos 
		// para crear una television.
        // Llama al constructor de la clase que hereda (Producto) y 
		// establece el valor de las pulgadas
        Television(int a, std::string m, float p, float pu) 
            : Producto(a, m, p, 7, 0.05), pulgadas(pu) {};

        // Método que devuelve el valor de las patas
        float get_pulgadas();
};

// Devuelve el valor de las pulgadas
float Television::get_pulgadas() {
    return pulgadas;
}

#endif 
